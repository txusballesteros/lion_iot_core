#ifndef LION_H
#define LION_H

#include <Arduino.h>
#include <Display.h>
#include <TouchButtons.h>
#include <Board.h>

class Lion {
public:
    void begin();
    Display* display();
    TouchButtons* touchButtons();

private:
    Display displayController = Display();
    TouchButtons buttons = TouchButtons();
};

#endif
