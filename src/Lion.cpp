#include <Lion.h>

Display* Lion::display() {  return &displayController; }
TouchButtons* Lion::touchButtons() {  return &buttons; }

void Lion::begin(int duration) {
  displayController.begin();
  displayController.drawLogo();
  displayController.draw();
  delay(duration);
}
