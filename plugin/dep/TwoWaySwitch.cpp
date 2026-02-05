#include "TwoWaySwitch.hpp"
#include <algorithm>

START_NAMESPACE_DGL

TwoWaySwitch::TwoWaySwitch(Widget* parent, const Image& img0, const Image& img1, int x, int y)
    : SubWidget(parent), fImages{img0, img1}, fState(false), fId(0), fCallback(nullptr)
{
    if (fImages[0].isValid()) {
        setWidth((int)fImages[0].getWidth());
        setHeight((int)fImages[0].getHeight());
    } else if (fImages[1].isValid()) {
        setWidth((int)fImages[1].getWidth());
        setHeight((int)fImages[1].getHeight());
    } else {
        setWidth(32);
        setHeight(32);
    }
    setAbsolutePos(x, y);
}

TwoWaySwitch::~TwoWaySwitch()
{
}

void TwoWaySwitch::setState(bool state)
{
    if (fState == state) return;
    fState = state;
    repaint();
}

bool TwoWaySwitch::getState() const noexcept
{
    return fState;
}

void TwoWaySwitch::setId(uint32_t id) noexcept
{
    fId = id;
}

void TwoWaySwitch::setCallback(Callback* cb) noexcept
{
    fCallback = cb;
}

void TwoWaySwitch::onDisplay()
{
    const GraphicsContext& context(getGraphicsContext());
    int index = fState ? 1 : 0;
    if (fImages[index].isValid()) {
        fImages[index].draw(context);
    }
}

bool TwoWaySwitch::onMouse(const MouseEvent& ev)
{
    if (SubWidget::onMouse(ev)) return true;

    if (!ev.press) return false;
    if (ev.button != 1) return false;
    const double px = ev.pos.getX();
    const double py = ev.pos.getY();
    if (px < 0.0 || py < 0.0 || px >= static_cast<double>(getWidth()) || py >= static_cast<double>(getHeight()))
        return false;

    bool newState = !fState;
    setState(newState);
    if (fCallback) fCallback->twoWayChanged(this, fState);
    return true;
}

END_NAMESPACE_DGL
