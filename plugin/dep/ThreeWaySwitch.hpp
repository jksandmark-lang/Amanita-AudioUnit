#ifndef THREEWAY_SWITCH_HPP_INCLUDED
#define THREEWAY_SWITCH_HPP_INCLUDED

#include "SubWidget.hpp"
#include "Image.hpp"
#include <cstdint>

START_NAMESPACE_DGL

class ThreeWaySwitch : public SubWidget
{
public:
    class Callback {
    public:
        virtual ~Callback() {}
        virtual void threeWayChanged(ThreeWaySwitch* sender, int state) = 0;
    };

    ThreeWaySwitch(Widget* parent, const Image& img0, const Image& img1, const Image& img2, int x = 0, int y = 0);
    ~ThreeWaySwitch() override;

    void setState(int state);
    int getState() const noexcept;

    void setId(uint32_t id) noexcept;
    void setCallback(Callback* cb) noexcept;

protected:
    void onDisplay() override;
    bool onMouse(const MouseEvent& ev) override;

private:
    Image fImages[3];
    int fState{0};

    uint32_t fId{0};
    Callback* fCallback{nullptr};
 };

END_NAMESPACE_DGL

#endif 
