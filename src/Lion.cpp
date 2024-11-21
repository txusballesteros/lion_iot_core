#include <Lion.h>

Display* Lion::display() {  return &displayController; }
TouchButtons* Lion::touchButtons() {  return &buttons; }

void Lion::begin() {
  displayController.begin();
  displayController.drawLogo();
  displayController.draw();
  delay(2000);
}
