#ifndef TouchButtons_h
#define TouchButtons_h

#include <Arduino.h>

#define PIN_BUTTON_A D0
#define PIN_BUTTON_B D3
#define LONG_PRESS_THRESHOLD 1000

class TouchButtons {
    public:
        enum BUTTON { A, B, A_B };
        enum BUTTON_EVENT { PRESSED, LONG_PRESSED };
        static void begin();
        static void loop(void(*onTouchButtonEvent)(BUTTON, BUTTON_EVENT));

    private:
        static unsigned long onPressedTimeForA;
        static unsigned long onPressedTimeForB;
        static int latestValueOnA;
        static int latestValueOnB;
};

extern TouchButtons Buttons; 

#endif