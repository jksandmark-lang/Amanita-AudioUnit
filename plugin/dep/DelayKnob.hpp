#ifndef DELAY_KNOB_HPP_INCLUDED
#define DELAY_KNOB_HPP_INCLUDED

#include "NanoVG.hpp"
#include "ImageWidgets.hpp"
#include "../dep/TwoWaySwitch.hpp"

class DelayKnob : public NanoSubWidget
{
public:
    DelayKnob(Widget* parent,
              ImageKnob::Callback* callback,
              const char* syncedData,
              unsigned int syncedWidth,
              unsigned int syncedHeight,
              const char* freeData,
              unsigned int freeWidth,
              unsigned int freeHeight,
              ImageFormat format,
              uint32_t paramId,
              float rangeMin,
              float rangeMax,
              TwoWaySwitch* tempoSyncSwitch,
              TwoWaySwitch* feelSwitch);
    
    ~DelayKnob();
    
    float getValue() const noexcept;
    void setValue(float value);
    void setAbsolutePos(int x, int y);
    void updateMode();

protected:
    void onNanoDisplay() override;

private:
    ImageKnob::Callback* fCallback;
    TwoWaySwitch* fTempoSyncSwitch;
    TwoWaySwitch* fFeelSwitch;
    
    char* fSyncedImageData;
    unsigned int fSyncedWidth;
    unsigned int fSyncedHeight;
    
    char* fFreeImageData;
    unsigned int fFreeWidth;
    unsigned int fFreeHeight;
    
    ImageFormat fFormat;
    uint32_t fParamId;
    float fRangeMin;
    float fRangeMax;
    
    ScopedPointer<Image> fCurrentImage;
    ScopedPointer<ImageKnob> fKnob;
    FontId fFontId;
    
    bool fLastTempoSyncState;
    int fPosX;
    int fPosY;
    
    void rebuildKnob(bool tempoSynced);
    void getDivisionText(float value, bool dotted, char* buffer);
    void getMillisecondText(float value, char* buffer);
};

#endif
