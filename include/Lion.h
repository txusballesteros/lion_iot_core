#ifndef LION_H
#define LION_H

#include <Arduino.h>
#include <Display.h>
#include <Board.h>

class Lion {
public:
    void begin();
    Display* display();

private:
    Display displayController = Display();
};

#endif
