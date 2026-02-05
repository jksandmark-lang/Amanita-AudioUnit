
#ifndef PNG_KNOB_HPP_INCLUDED
#define PNG_KNOB_HPP_INCLUDED

#include "NanoVG.hpp"
#include "ImageWidgets.hpp"

class pngKnob : public NanoSubWidget
{
public:
    pngKnob(
        Widget* parent,
        ImageKnob::Callback* callback,
        Image* image,
        uint32_t paramId,
        float rangeMin,
        float rangeMax,
        const char* numberFormat,
        int x, int y);
    
    pngKnob(Widget* parent,
        ImageKnob::Callback* callback,
        const char* rawData,
        unsigned int width,
        unsigned int height,
        ImageFormat format,
        uint32_t paramId,
        float rangeMin,
        float rangeMax,
        const char* numberFormat);
    float getValue() const noexcept;
    void setValue(float value);
    void setDefault(float value) noexcept;
    void setAbsolutePos(int x, int y);
    void setTextOffsetY(int offsetY) noexcept;
    ~pngKnob();

protected:
    void onNanoDisplay() override;

private:
    const char* fNumberFormat;
    FontId fFontId;
    ScopedPointer<ImageKnob> knob;
    Image* fImage{ nullptr };
    ImageKnob::Callback* fCallback{ nullptr };
    uint32_t fParamId{ 0 };
    float fRangeMin{ 0.0f };
    float fRangeMax{ 1.0f };
    int fPosX{ 0 };
    int fPosY{ 0 };
    int fTextOffsetY{ 0 };
    bool fKnobInitialized{ false };
    void ensureKnobInitialized();
    ScopedPointer<Image> fOwnedImage;
    char* fOwnedRawData{ nullptr };
};

#endif
