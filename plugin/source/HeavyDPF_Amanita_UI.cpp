/**
 * Copyright (c) 2026 Enzien Audio, Ltd.
 * 
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 * 
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions, and the following disclaimer.
 * 
 * 2. Redistributions in binary form must reproduce the phrase "powered by heavy",
 *    the heavy logo, and a hyperlink to https://enzienaudio.com, all in a visible
 *    form.
 * 
 *   2.1 If the Application is distributed in a store system (for example,
 *       the Apple "App Store" or "Google Play"), the phrase "powered by heavy"
 *       shall be included in the app description or the copyright text as well as
 *       the in the app itself. The heavy logo will shall be visible in the app
 *       itself as well.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * 
 */

#include "DistrhoUI.hpp"
#include "ResizeHandle.hpp"
#include "Image.hpp"
#include "../resources/Artwork.hpp"
#include "../resources/Jura.hpp"
#include "../dep/pngKnob.hpp"
#include "../dep/DelayKnob.hpp"
#include "../dep/ThreeWaySwitch.hpp"
#include "../dep/TwoWaySwitch.hpp"

START_NAMESPACE_DISTRHO

// --------------------------------------------------------------------------------------------------------------------
enum HeavyParams {BITRATE,DEL_LEFT,DEL_RIGHT,FEEDBACK,FEEL_LEFT,FEEL_RIGHT,HIPASS_FREQ,HIPASS_RES,LFO_AMOUNT,LFO_PHAZE,LFO_RATE,LOWPASS_FREQ,LOWPASS_RES,MONO_STERO_IN,NOISE_AGGRO,NOISE_LVL,PAN,SIDECHAIN,STEREO_PINGPONG,SYNC_DELAYS,TEMPO_SYNC,WET_MIX
};

class AmanitaPluginUI : public UI, public ImageKnob::Callback, public ImageSlider::Callback, public ThreeWaySwitch::Callback, public TwoWaySwitch::Callback
{
    
    int fbitrate = 2.0;
    float fdel_left = 0.5f;
    float fdel_right = 0.5f;
    float ffeedback = 0.3f;
    bool ffeel_left = 0.0f != 0.0f;
    bool ffeel_right = 0.0f != 0.0f;
    float fhipass_freq = 60.0f;
    float fhipass_res = 0.3f;
    float flfo_amount = 0.0f;
    float flfo_phaze = 0.5f;
    float flfo_rate = 1.0f;
    float flowpass_freq = 5000.0f;
    float flowpass_res = 0.4f;
    bool fmono_stero_in = 1.0f != 0.0f;
    float fnoise_aggro = 0.2f;
    float fnoise_lvl = 0.3f;
    float fpan = 1.0f;
    float fsidechain = 0.0f;
    bool fstereo_pingpong = 0.0f != 0.0f;
    bool fsync_delays = 1.0f != 0.0f;
    bool ftempo_sync = 1.0f != 0.0f;
    float fwet_mix = 0.3f;
    
    Image fImgBackground;
    ResizeHandle fResizeHandle;
    ScopedPointer<DelayKnob> fDelLeftKnob;
    ScopedPointer<DelayKnob> fDelRightKnob;
    ScopedPointer<pngKnob> fHipassFreqKnob;
    ScopedPointer<pngKnob> fLowpassFreqKnob;
    ScopedPointer<pngKnob> fPanKnob;
    ScopedPointer<pngKnob> fNoiseLvlKnob;
    ScopedPointer<pngKnob> fNoiseAggroKnob;
    ScopedPointer<pngKnob> fHipassResKnob;
    ScopedPointer<pngKnob> fLowpassResKnob;
    ScopedPointer<pngKnob> fLfoRateKnob;
    ScopedPointer<pngKnob> fLfoAmountKnob;
    ScopedPointer<pngKnob> fLfoPhazeKnob;
    ScopedPointer<ImageSlider> fSidechainSlider;
    ScopedPointer<ImageSlider> fFeedbackSlider;
    ScopedPointer<ImageSlider> fWetMixSlider;
    ScopedPointer<ThreeWaySwitch> fBitrateSwitch;
    ScopedPointer<TwoWaySwitch> fStereoPingpongSwitch;
    ScopedPointer<TwoWaySwitch> fFeelLeftSwitch;
    ScopedPointer<TwoWaySwitch> fFeelRightSwitch;
    ScopedPointer<TwoWaySwitch> fTempoSyncSwitch;
    ScopedPointer<TwoWaySwitch> fMonoSteroInSwitch;
    ScopedPointer<TwoWaySwitch> fSyncDelaysSwitch;

// ----------------------------------------------------------------------------------------------------------------

public:
    AmanitaPluginUI()
        : UI(DISTRHO_UI_DEFAULT_WIDTH, DISTRHO_UI_DEFAULT_HEIGHT),
          fImgBackground(Artwork::BG_makoData, Artwork::BG_makoWidth, Artwork::BG_makoHeight, kImageFormatBGRA),
          fResizeHandle(this)
    {
        setGeometryConstraints(DISTRHO_UI_DEFAULT_WIDTH, DISTRHO_UI_DEFAULT_HEIGHT, true);

        if (isResizable())
            fResizeHandle.hide();
        
        Image img0(Artwork::Switch0Data, Artwork::Switch0Width, Artwork::Switch0Height, kImageFormatBGRA);
        Image img1(Artwork::Switch1Data, Artwork::Switch1Width, Artwork::Switch1Height, kImageFormatBGRA);
        Image img2(Artwork::Switch2Data, Artwork::Switch2Width, Artwork::Switch2Height, kImageFormatBGRA);

        fBitrateSwitch = new ThreeWaySwitch(this, img0, img1, img2, 250, 63);
        fBitrateSwitch->setId(BITRATE);
        fBitrateSwitch->setState(fbitrate);
        fBitrateSwitch->setCallback(this);

        fStereoPingpongSwitch = new TwoWaySwitch(this, img0, img2, 170, 409);
        fStereoPingpongSwitch->setId(STEREO_PINGPONG);
        fStereoPingpongSwitch->setState(fstereo_pingpong);
        fStereoPingpongSwitch->setCallback(this);

        fFeelLeftSwitch = new TwoWaySwitch(this, img0, img2, 80, 420);
        fFeelLeftSwitch->setId(FEEL_LEFT);
        fFeelLeftSwitch->setState(ffeel_left);
        fFeelLeftSwitch->setCallback(this);

        fFeelRightSwitch = new TwoWaySwitch(this, img0, img2, 260, 420);
        fFeelRightSwitch->setId(FEEL_RIGHT);
        fFeelRightSwitch->setState(ffeel_right);
        fFeelRightSwitch->setCallback(this);

        fTempoSyncSwitch = new TwoWaySwitch(this, img0, img2, 80, 530);
        fTempoSyncSwitch->setId(TEMPO_SYNC);
        fTempoSyncSwitch->setState(ftempo_sync);
        fTempoSyncSwitch->setCallback(this);

        fMonoSteroInSwitch = new TwoWaySwitch(this, img0, img2, 260, 530);
        fMonoSteroInSwitch->setId(MONO_STERO_IN);
        fMonoSteroInSwitch->setState(fmono_stero_in);
        fMonoSteroInSwitch->setCallback(this);

        fSyncDelaysSwitch = new TwoWaySwitch(this, img0, img2, 170, 294);
        fSyncDelaysSwitch->setId(SYNC_DELAYS);
        fSyncDelaysSwitch->setState(fsync_delays);
        fSyncDelaysSwitch->setCallback(this);
        
        fDelLeftKnob = new DelayKnob
        (
            this,
            this,
            Artwork::amaKnobLarge9fData,
            Artwork::amaKnobLarge9fWidth,
            Artwork::amaKnobLarge9fHeight,
            Artwork::amaKnobLarge64fData,
            Artwork::amaKnobLarge64fWidth,
            Artwork::amaKnobLarge64fHeight,
            kImageFormatBGRA,
            DEL_LEFT,
            0.0f,
            1.0f,
            fTempoSyncSwitch,
            fFeelLeftSwitch
        );

        fDelRightKnob = new DelayKnob
        (
            this,
            this,
            Artwork::amaKnobLarge9fData,
            Artwork::amaKnobLarge9fWidth,
            Artwork::amaKnobLarge9fHeight,
            Artwork::amaKnobLarge64fData,
            Artwork::amaKnobLarge64fWidth,
            Artwork::amaKnobLarge64fHeight,
            kImageFormatBGRA,
            DEL_RIGHT,
            0.0f,
            1.0f,
            fTempoSyncSwitch,
            fFeelRightSwitch
        );

        fDelLeftKnob->setAbsolutePos(42, 268);
        fDelLeftKnob->setValue(fdel_left);
        fDelRightKnob->setAbsolutePos(219, 268);
        fDelRightKnob->setValue(fdel_right);

        fHipassFreqKnob = new pngKnob
        (
            this,
            this,
            Artwork::amaKnobMedium64fData,
            Artwork::amaKnobMedium64fWidth,
            Artwork::amaKnobMedium64fHeight,
            kImageFormatBGRA,
            HIPASS_FREQ,
            41.0f,
            1200.0f,
            "%.0f"
        );

        fLowpassFreqKnob = new pngKnob
        (
            this,
            this,
            Artwork::amaKnobMedium64fData,
            Artwork::amaKnobMedium64fWidth,
            Artwork::amaKnobMedium64fHeight,
            kImageFormatBGRA,
            LOWPASS_FREQ,
            50.0f,
            20000.0f,
            "%.0f"
        );

        fPanKnob = new pngKnob
        (
            this,
            this,
            Artwork::amaKnobMedium64fData,
            Artwork::amaKnobMedium64fWidth,
            Artwork::amaKnobMedium64fHeight,
            kImageFormatBGRA,
            PAN,
            0.0f,
            2.0f,
            "%.1f"
        );

        fHipassFreqKnob->setAbsolutePos(37, 63);
        fHipassFreqKnob->setValue(fhipass_freq);
        fLowpassFreqKnob->setAbsolutePos(125, 63);
        fLowpassFreqKnob->setValue(flowpass_freq);
        fPanKnob->setAbsolutePos(154, 530);
        fPanKnob->setValue(fpan);

        fNoiseLvlKnob = new pngKnob
        (
            this,
            this,
            Artwork::amaKnobVerySmall64fData,
            Artwork::amaKnobVerySmall64fWidth,
            Artwork::amaKnobVerySmall64fHeight,
            kImageFormatBGRA,
            NOISE_LVL,
            0.0f,
            1.0f,
            "%.1f"
        );

        fNoiseAggroKnob = new pngKnob
        (
            this,
            this,
            Artwork::amaKnobVerySmall64fData,
            Artwork::amaKnobVerySmall64fWidth,
            Artwork::amaKnobVerySmall64fHeight,
            kImageFormatBGRA,
            NOISE_AGGRO,
            0.0f,
            1.0f,
            "%.1f"
        );

        fNoiseLvlKnob->setAbsolutePos(213, 174);
        fNoiseLvlKnob->setValue(fnoise_lvl);
        fNoiseAggroKnob->setAbsolutePos(259, 174);
        fNoiseAggroKnob->setValue(fnoise_aggro);

        fHipassResKnob = new pngKnob
        (
            this,
            this,
            Artwork::amaKnobSmall64fData,
            Artwork::amaKnobSmall64fWidth,
            Artwork::amaKnobSmall64fHeight,
            kImageFormatBGRA,
            HIPASS_RES,
            0.0f,
            1.0f,
            "%.1f"
        );

        fLowpassResKnob = new pngKnob
        (
            this,
            this,
            Artwork::amaKnobSmall64fData,
            Artwork::amaKnobSmall64fWidth,
            Artwork::amaKnobSmall64fHeight,
            kImageFormatBGRA,
            LOWPASS_RES,
            0.0f,
            1.0f,
            "%.1f"
        );

        fHipassResKnob->setAbsolutePos(49, 157);
        fHipassResKnob->setValue(fhipass_res);
        fLowpassResKnob->setAbsolutePos(137, 157);
        fLowpassResKnob->setValue(flowpass_res);
        
        fLfoRateKnob = new pngKnob
        (
            this,
            this,
            Artwork::amaKnobVerySmall64fData,
            Artwork::amaKnobVerySmall64fWidth,
            Artwork::amaKnobVerySmall64fHeight,
            kImageFormatBGRA,
            LFO_RATE,
            0.0f,
            10.0f,
            "%.1f"
        );

        fLfoAmountKnob = new pngKnob
        (
            this,
            this,
            Artwork::amaKnobVerySmall64fData,
            Artwork::amaKnobVerySmall64fWidth,
            Artwork::amaKnobVerySmall64fHeight,
            kImageFormatBGRA,
            LFO_AMOUNT,
            0.0f,
            1.0f,
            "%.1f"
        );

        fLfoPhazeKnob = new pngKnob
        (
            this,
            this,
            Artwork::amaKnobVerySmall64fData,
            Artwork::amaKnobVerySmall64fWidth,
            Artwork::amaKnobVerySmall64fHeight,
            kImageFormatBGRA,
            LFO_PHAZE,
            0.0f,
            1.0f,
            "%.1f"
        );

        fLfoRateKnob->setAbsolutePos(135, 638);
        fLfoRateKnob->setValue(flfo_rate);
        fLfoRateKnob->setTextOffsetY(-7);
        fLfoAmountKnob->setAbsolutePos(177, 638);
        fLfoAmountKnob->setValue(flfo_amount);
        fLfoAmountKnob->setTextOffsetY(-7);
        fLfoPhazeKnob->setAbsolutePos(225, 638);
        fLfoPhazeKnob->setValue(flfo_phaze);
        fLfoPhazeKnob->setTextOffsetY(-7);
        
        Image sliderThumb(Artwork::sliderThumbSmallData, Artwork::sliderThumbSmallWidth, Artwork::sliderThumbSmallHeight, kImageFormatBGRA);
        fSidechainSlider = new ImageSlider(this, sliderThumb);
        fSidechainSlider->setId(SIDECHAIN);
        fSidechainSlider->setStartPos(405, 306);
        fSidechainSlider->setEndPos(405, 380);
        fSidechainSlider->setRange(0.0f, 1.0f);
        fSidechainSlider->setInverted(true);
        fSidechainSlider->setValue(fsidechain);
        fSidechainSlider->setCallback(this);
         
        fWetMixSlider = new ImageSlider(this, sliderThumb);
        fWetMixSlider->setId(WET_MIX);
        fWetMixSlider->setStartPos(405, 478);
        fWetMixSlider->setEndPos(405, 552);
        fWetMixSlider->setRange(0.0f, 1.0f);
        fWetMixSlider->setInverted(true);
        fWetMixSlider->setValue(fwet_mix);
        fWetMixSlider->setCallback(this);

        Image sliderThumbLarge(Artwork::sliderThumbLargeData, Artwork::sliderThumbLargeWidth, Artwork::sliderThumbLargeHeight, kImageFormatBGRA);
        fFeedbackSlider = new ImageSlider(this, sliderThumbLarge);
        fFeedbackSlider->setId(FEEDBACK);
        fFeedbackSlider->setStartPos(519, 338);
        fFeedbackSlider->setEndPos(519, 525);
        fFeedbackSlider->setRange(0.0f, 1.0f);
        fFeedbackSlider->setInverted(true);
        fFeedbackSlider->setValue(ffeedback);
        fFeedbackSlider->setCallback(this);

    }

protected:
    // ----------------------------------------------------------------------------------------------------------------
    // DSP/Plugin Callbacks

   /**
      A parameter has changed on the plugin side.@n
      This is called by the host to inform the UI about parameter changes.
    */
    void parameterChanged(uint32_t index, float value) override
    {
        switch (index) {
            case BITRATE:
                fbitrate = value;
                if (fBitrateSwitch != nullptr)
                    fBitrateSwitch->setState((int)value);
                break;
            case DEL_LEFT:
                fdel_left = value;
                if (fDelLeftKnob != nullptr)
                fDelLeftKnob->setValue(value);
                break;
            case DEL_RIGHT:
                fdel_right = value;
                if (fDelRightKnob != nullptr)
                fDelRightKnob->setValue(value);
                break;
            case FEEDBACK:
                ffeedback = value;
                if (fFeedbackSlider != nullptr)
                    fFeedbackSlider->setValue(value);
                break;
            case FEEL_LEFT:
                ffeel_left = value != 0.0f;
                if (fFeelLeftSwitch != nullptr)
                    fFeelLeftSwitch->setState(value != 0.0f);
                break;
            case FEEL_RIGHT:
                ffeel_right = value != 0.0f;
                if (fFeelRightSwitch != nullptr)
                    fFeelRightSwitch->setState(value != 0.0f);
                break;
            case HIPASS_FREQ:
                fhipass_freq = value;
                if (fHipassFreqKnob != nullptr)
                    fHipassFreqKnob->setValue(value);
                break;
            case HIPASS_RES:
                fhipass_res = value;
                if (fHipassResKnob != nullptr)
                    fHipassResKnob->setValue(value);
                break;
            case LFO_AMOUNT:
                flfo_amount = value;
                if (fLfoAmountKnob != nullptr)
                    fLfoAmountKnob->setValue(value);
                break;
            case LFO_PHAZE:
                flfo_phaze = value;
                if (fLfoPhazeKnob != nullptr)
                    fLfoPhazeKnob->setValue(value);
                break;
            case LFO_RATE:
                flfo_rate = value;
                if (fLfoRateKnob != nullptr)
                    fLfoRateKnob->setValue(value);
                break;
            case LOWPASS_FREQ:
                flowpass_freq = value;
                if (fLowpassFreqKnob != nullptr)
                    fLowpassFreqKnob->setValue(value);
                break;
            case LOWPASS_RES:
                flowpass_res = value;
                if (fLowpassResKnob != nullptr)
                    fLowpassResKnob->setValue(value);
                break;
            case MONO_STERO_IN:
                fmono_stero_in = value != 0.0f;
                if (fMonoSteroInSwitch != nullptr)
                    fMonoSteroInSwitch->setState(value != 0.0f);
                break;
            case NOISE_AGGRO:
                fnoise_aggro = value;
                if (fNoiseAggroKnob != nullptr)
                    fNoiseAggroKnob->setValue(value);
                break;
            case NOISE_LVL:
                fnoise_lvl = value;
                if (fNoiseLvlKnob != nullptr)
                    fNoiseLvlKnob->setValue(value);
                break;
            case PAN:
                fpan = value;
                if (fPanKnob != nullptr)
                    fPanKnob->setValue(value);
                break;
            case SIDECHAIN:
                fsidechain = value;
                if (fSidechainSlider != nullptr)
                    fSidechainSlider->setValue(value);
                break;
            case STEREO_PINGPONG:
                fstereo_pingpong = value != 0.0f;
                if (fStereoPingpongSwitch != nullptr)
                    fStereoPingpongSwitch->setState(value != 0.0f);
                break;
            case SYNC_DELAYS:
                fsync_delays = value != 0.0f;
                if (fSyncDelaysSwitch != nullptr)
                    fSyncDelaysSwitch->setState(value != 0.0f);
                break;
            case TEMPO_SYNC:
                ftempo_sync = value != 0.0f;
                if (fTempoSyncSwitch != nullptr)
                    fTempoSyncSwitch->setState(value != 0.0f);
                break;
            case WET_MIX:
                fwet_mix = value;
                if (fWetMixSlider != nullptr)
                    fWetMixSlider->setValue(value);
                break;
            
            default: return;
        }
    
        repaint();
    }

    // ----------------------------------------------------------------------------------------------------------------
    // Widget Callbacks

    void imageKnobDragStarted(ImageKnob* knob) override
    {
        editParameter(knob->getId(), true);
    }

    void imageKnobDragFinished(ImageKnob* knob) override
    {
        editParameter(knob->getId(), false);
    }

    void imageKnobValueChanged(ImageKnob* knob, float value) override
    {
        const uint32_t paramId = knob->getId();
        
        switch (paramId) {
            case HIPASS_FREQ:
                fhipass_freq = value;
                break;
            case LOWPASS_FREQ:
                flowpass_freq = value;
                break;
            case HIPASS_RES:
                fhipass_res = value;
                break;
            case LOWPASS_RES:
                flowpass_res = value;
                break;
            case NOISE_LVL:
                fnoise_lvl = value;
                break;
            case NOISE_AGGRO:
                fnoise_aggro = value;
                break;
            case DEL_LEFT:
                fdel_left = value;
                break;
            case DEL_RIGHT:
                fdel_right = value;
                break;
            case PAN:
                fpan = value;
                break;
            case LFO_RATE:
                flfo_rate = value;
                break;
            case LFO_AMOUNT:
                flfo_amount = value;
                break;
            case LFO_PHAZE:
                flfo_phaze = value;
                break;

        }
        
        setParameterValue(paramId, value);
        repaint();
    }

    void imageSliderDragStarted(ImageSlider* slider) override
    {
        editParameter(slider->getId(), true);
    }

    void imageSliderDragFinished(ImageSlider* slider) override
    {
        editParameter(slider->getId(), false);
    }

    void imageSliderValueChanged(ImageSlider* slider, float value) override
    {
        const uint32_t paramId = slider->getId();
        
        switch (paramId) {
            case SIDECHAIN:
                fsidechain = value;
                break;
            case FEEDBACK:
                ffeedback = value;
                break;
            case WET_MIX:
                fwet_mix = value;
                break;
        }
        
        setParameterValue(paramId, value);
        repaint();
    }

    void threeWayChanged(ThreeWaySwitch* sender, int state) override
    {
        const uint32_t paramId = sender->getId();
        
        switch (paramId) {
            case BITRATE:
                fbitrate = state;
                break;
        }
        
        editParameter(paramId, true);
        setParameterValue(paramId, (float)state);
        editParameter(paramId, false);
        repaint();
    }

    void twoWayChanged(TwoWaySwitch* sender, bool state) override
    {
        const uint32_t paramId = sender->getId();
        
        switch (paramId) {
            case STEREO_PINGPONG:
                fstereo_pingpong = state;
                break;
            case FEEL_LEFT:
                ffeel_left = state;
                break;
            case FEEL_RIGHT:
                ffeel_right = state;
                break;
            case TEMPO_SYNC:
                ftempo_sync = state;
                break;
            case MONO_STERO_IN:
                fmono_stero_in = state;
                break;
            case SYNC_DELAYS:
                fsync_delays = state;
                break;
        }
        
        editParameter(paramId, true);
        setParameterValue(paramId, state ? 1.0f : 0.0f);
        editParameter(paramId, false);
        repaint();
    }

    void onDisplay()
{
    fImgBackground.draw(getGraphicsContext());
}

    DISTRHO_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(AmanitaPluginUI)
};

// --------------------------------------------------------------------------------------------------------------------

UI* createUI()
{
    return new AmanitaPluginUI();
}

// --------------------------------------------------------------------------------------------------------------------

END_NAMESPACE_DISTRHO