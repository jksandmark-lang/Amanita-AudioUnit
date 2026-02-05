#include "pngKnob.hpp"
#include "../resources/Jura.hpp"
#include <cstdio>

pngKnob::pngKnob(Widget* parent,
    ImageKnob::Callback* callback,
    Image* image,
    uint32_t paramId,
    float rangeMin,
    float rangeMax,
    const char* numberFormat,
    int x, int y)
    : NanoSubWidget(parent)
{
    if (image)
    {
        unsigned frameW = image->getWidth();
        unsigned frameH = image->getHeight();
        if (image->getHeight() > image->getWidth()) {
            frameH = image->getWidth();
        } else {
            frameW = image->getHeight();
        }
        setWidth(frameW);
        setHeight(frameH + 20);
    }
    else
    {
        setWidth(20);
        setHeight(30);
    }
    setAbsolutePos(x, y);

    fNumberFormat = numberFormat;
    fImage = image;
    fCallback = callback;
    fParamId = paramId;
    fRangeMin = rangeMin;
    fRangeMax = rangeMax;
    fPosX = x + 10;
    fPosY = y + 14;
    fKnobInitialized = false;
}

pngKnob::pngKnob(Widget* parent,
    ImageKnob::Callback* callback,
    const char* rawData,
    unsigned int width,
    unsigned int height,
    ImageFormat format,
    uint32_t paramId,
    float rangeMin,
    float rangeMax,
    const char* numberFormat)
    : NanoSubWidget(parent)
{
    size_t dataSize = width * height * 4;
    fOwnedRawData = new char[dataSize];
    std::memcpy(fOwnedRawData, rawData, dataSize);
    
    fOwnedImage = new Image(fOwnedRawData, width, height, format);
    
    fFontId = createFontFromMemory("jura", (const unsigned char*)Jura::JuraData, Jura::JuraDataSize, false);
    
    unsigned frameW = width;
    unsigned frameH = height;
    if (height > width) {
        frameH = width;
    }
    
    setWidth(frameW);
    setHeight(frameH + 20);
    
    fImage = fOwnedImage;
    fCallback = callback;
    fNumberFormat = numberFormat;
    fParamId = paramId;
    fRangeMin = rangeMin;
    fRangeMax = rangeMax;
    fPosX = 10;
    fPosY = 14;
    fKnobInitialized = false;
}

pngKnob::~pngKnob()
{
    if (fOwnedRawData)
        delete[] fOwnedRawData;
}

void pngKnob::setDefault(float value) noexcept
{
    if (knob)
        knob->setDefault(value);
}

float pngKnob::getValue() const noexcept
{
    if (!fKnobInitialized)
        const_cast<pngKnob *>(this)->ensureKnobInitialized();
    return knob ? knob->getValue() : 0.0f;
}

void pngKnob::setValue(float value)
{
    if (!fKnobInitialized)
        ensureKnobInitialized();
    if (knob)
        knob->setValue(value);
}

void pngKnob::setAbsolutePos(int x, int y)
{
    SubWidget::setAbsolutePos(x, y);
    fPosX = x;
    fPosY = y;
    if (knob)
        knob->setAbsolutePos(fPosX, fPosY);
}

void pngKnob::setTextOffsetY(int offsetY) noexcept
{
    fTextOffsetY = offsetY;
}

void pngKnob::onNanoDisplay()
{
    if (!fKnobInitialized)
        ensureKnobInitialized();

    fontFaceId(fFontId);
    fontSize(14);

    if (fNumberFormat != nullptr) {
        char strBuf[33];
        const float val = knob ? knob->getValue() : 0.0f;
        std::snprintf(strBuf, 32, fNumberFormat, val);
        
        beginPath();
        fillColor(108, 211, 173);
        textAlign(ALIGN_CENTER | ALIGN_BOTTOM);
        textBox(0, getHeight() + fTextOffsetY, getWidth(), strBuf);
        closePath();
    }
}

void pngKnob::ensureKnobInitialized()
{
    if (fKnobInitialized)
        return;

    if (fImage == nullptr)
    {
        fKnobInitialized = true;
        return;
    }

    knob = new ImageKnob(this, *fImage);
    knob->setId(fParamId);
    knob->setAbsolutePos(fPosX, fPosY);
    knob->setRange(fRangeMin, fRangeMax);

    knob->setCallback(fCallback);

    fKnobInitialized = true;
}
