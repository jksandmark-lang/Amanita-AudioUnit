#include "DelayKnob.hpp"
#include "../resources/Jura.hpp"
#include <cstdio>
#include <cmath>

DelayKnob::DelayKnob(Widget* parent,
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
                     TwoWaySwitch* feelSwitch)
    : NanoSubWidget(parent)
    , fCallback(callback)
    , fTempoSyncSwitch(tempoSyncSwitch)
    , fFeelSwitch(feelSwitch)
    , fFormat(format)
    , fParamId(paramId)
    , fRangeMin(rangeMin)
    , fRangeMax(rangeMax)
    , fLastTempoSyncState(false)
    , fPosX(0)
    , fPosY(0)
{
    size_t syncedDataSize = syncedWidth * syncedHeight * 4;
    fSyncedImageData = new char[syncedDataSize];
    std::memcpy(fSyncedImageData, syncedData, syncedDataSize);
    fSyncedWidth = syncedWidth;
    fSyncedHeight = syncedHeight;
    
    size_t freeDataSize = freeWidth * freeHeight * 4;
    fFreeImageData = new char[freeDataSize];
    std::memcpy(fFreeImageData, freeData, freeDataSize);
    fFreeWidth = freeWidth;
    fFreeHeight = freeHeight;
    
    fFontId = createFontFromMemory("jura", (const unsigned char*)Jura::JuraData, Jura::JuraDataSize, false);
    
    fLastTempoSyncState = tempoSyncSwitch ? tempoSyncSwitch->getState() : false;
    rebuildKnob(fLastTempoSyncState);
}

DelayKnob::~DelayKnob()
{
    if (fSyncedImageData)
        delete[] fSyncedImageData;
    if (fFreeImageData)
        delete[] fFreeImageData;
}

void DelayKnob::rebuildKnob(bool tempoSynced)
{
    if (tempoSynced)
    {
        fCurrentImage = new Image(fSyncedImageData, fSyncedWidth, fSyncedHeight, fFormat);
        fKnob = new ImageKnob(this, *fCurrentImage);
        fKnob->setId(fParamId);
        fKnob->setAbsolutePos(fPosX, fPosY);
        fKnob->setRange(fRangeMin, fRangeMax);
        fKnob->setCallback(fCallback);
        
        setWidth(fKnob->getWidth());
        setHeight(fKnob->getHeight() + 20);
    }
    else
    {
        fCurrentImage = new Image(fFreeImageData, fFreeWidth, fFreeHeight, fFormat);
        fKnob = new ImageKnob(this, *fCurrentImage);
        fKnob->setId(fParamId);
        fKnob->setAbsolutePos(fPosX, fPosY);
        fKnob->setRange(fRangeMin, fRangeMax);
        fKnob->setCallback(fCallback);
        
        setWidth(fKnob->getWidth());
        setHeight(fKnob->getHeight() + 20);
    }
}

void DelayKnob::updateMode()
{
    if (!fTempoSyncSwitch)
        return;
    
    bool currentState = fTempoSyncSwitch->getState();
    if (currentState != fLastTempoSyncState)
    {
        float currentValue = fKnob ? fKnob->getValue() : 0.5f;
        fLastTempoSyncState = currentState;
        rebuildKnob(currentState);
        if (fKnob)
            fKnob->setValue(currentValue);
        repaint();
    }
}

float DelayKnob::getValue() const noexcept
{
    return fKnob ? fKnob->getValue() : 0.0f;
}

void DelayKnob::setValue(float value)
{
    if (fKnob)
        fKnob->setValue(value);
}

void DelayKnob::setAbsolutePos(int x, int y)
{
    SubWidget::setAbsolutePos(x, y);
    fPosX = x;
    fPosY = y;
    if (fKnob)
        fKnob->setAbsolutePos(fPosX, fPosY);
}

void DelayKnob::getDivisionText(float value, bool dotted, char* buffer)
{
    const char* divisions[] = {"1/64", "1/32", "1/16", "1/8", "1/4", "1/2", "1", "2", "4"};
    int index = (int)(value * 8.0f + 0.5f);
    if (index < 0) index = 0;
    if (index > 8) index = 8;
    
    if (dotted)
        std::snprintf(buffer, 32, "%s.", divisions[index]);
    else
        std::snprintf(buffer, 32, "%s", divisions[index]);
}

void DelayKnob::getMillisecondText(float value, char* buffer)
{
    int ms = (int)(12.0f + value * (6000.0f - 12.0f));
    std::snprintf(buffer, 32, "%dms", ms);
}

void DelayKnob::onNanoDisplay()
{
    updateMode();
    
    fontFaceId(fFontId);
    fontSize(14);
    
    bool tempoSynced = fTempoSyncSwitch ? fTempoSyncSwitch->getState() : false;
    bool feel = fFeelSwitch ? fFeelSwitch->getState() : false;
    
    char strBuf[33];
    const float val = fKnob ? fKnob->getValue() : 0.0f;
    
    if (tempoSynced)
        getDivisionText(val, feel, strBuf);
    else
        getMillisecondText(val, strBuf);
    
    beginPath();
    fillColor(108, 211, 173);
    textAlign(ALIGN_CENTER | ALIGN_BOTTOM);
    textBox(0, getHeight(), getWidth(), strBuf);
    closePath();
}
