#include <Arduino.h>
#include <Lion.h>

Lion lion = Lion();

void setup() {
    lion.begin();
}

void onTouchButtonEvent(TouchButtons::BUTTON button, TouchButtons::BUTTON_EVENT event) {
    if (event ==  TouchButtons::BUTTON_EVENT::PRESSED) {
        switch (button) {
            case TouchButtons::BUTTON::A:
                //ToDo
                break;
            case TouchButtons::BUTTON::B:
                //ToDo
                break;
            case TouchButtons::BUTTON::A_B:
                //ToDo
                break;
        }
    }
}

void loop() {
    lion.touchButtons()->loop(onTouchButtonEvent);
}