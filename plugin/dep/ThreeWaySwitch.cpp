#include "ThreeWaySwitch.hpp"
#include <algorithm>

START_NAMESPACE_DGL

ThreeWaySwitch::ThreeWaySwitch(Widget* parent, const Image& img0, const Image& img1, const Image& img2, int x, int y)
    : SubWidget(parent), fImages{img0, img1, img2}, fState(0), fId(0), fCallback(nullptr)
{
    if (fImages[0].isValid()) {
        setWidth((int)fImages[0].getWidth());
        setHeight((int)fImages[0].getHeight());
    } else if (fImages[1].isValid()) {
        setWidth((int)fImages[1].getWidth());
        setHeight((int)fImages[1].getHeight());
    } else if (fImages[2].isValid()) {
        setWidth((int)fImages[2].getWidth());
        setHeight((int)fImages[2].getHeight());
    } else {
        setWidth(32);
        setHeight(32);
    }
    setAbsolutePos(x, y);
}

ThreeWaySwitch::~ThreeWaySwitch()
{
}

void ThreeWaySwitch::setState(int state)
{
    if (state < 0) state = 0;
    if (state > 2) state = 2;
    if (fState == state) return;
    fState = state;
    repaint();
}

int ThreeWaySwitch::getState() const noexcept
{
    return fState;
}

void ThreeWaySwitch::setId(uint32_t id) noexcept
{
    fId = id;
}

void ThreeWaySwitch::setCallback(Callback* cb) noexcept
{
    fCallback = cb;
}

void ThreeWaySwitch::onDisplay()
{
    const GraphicsContext& context(getGraphicsContext());
    if (fImages[fState].isValid()) {
        fImages[fState].draw(context);
    }
}

bool ThreeWaySwitch::onMouse(const MouseEvent& ev)
{
    if (SubWidget::onMouse(ev)) return true;

    if (!ev.press) return false;
    if (ev.button != 1) return false;
    const double px = ev.pos.getX();
    const double py = ev.pos.getY();
    if (px < 0.0 || py < 0.0 || px >= static_cast<double>(getWidth()) || py >= static_cast<double>(getHeight()))
        return false;

    int newState = (fState + 1) % 3;
    setState(newState);
    if (fCallback) fCallback->threeWayChanged(this, fState);
    return true;
}

END_NAMESPACE_DGL
