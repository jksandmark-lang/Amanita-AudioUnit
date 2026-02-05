#ifndef TWOWAY_SWITCH_HPP_INCLUDED
#define TWOWAY_SWITCH_HPP_INCLUDED

#include "SubWidget.hpp"
#include "Image.hpp"
#include <cstdint>

START_NAMESPACE_DGL

class TwoWaySwitch : public SubWidget
{
public:
    class Callback {
    public:
        virtual ~Callback() {}
        virtual void twoWayChanged(TwoWaySwitch* sender, bool state) = 0;
    };

    TwoWaySwitch(Widget* parent, const Image& img0, const Image& img1, int x = 0, int y = 0);
    ~TwoWaySwitch() override;

    void setState(bool state);
    bool getState() const noexcept;

    void setId(uint32_t id) noexcept;
    void setCallback(Callback* cb) noexcept;

protected:
    void onDisplay() override;
    bool onMouse(const MouseEvent& ev) override;

private:
    Image fImages[2];
    bool fState{false};

    uint32_t fId{0};
    Callback* fCallback{nullptr};
 };

END_NAMESPACE_DGL

#endif
