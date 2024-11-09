#include <Lion.h>

Display* Lion::display() {  return &displayController; }
TouchButtons* Lion::touchButtons() {  return &buttons; }

void Lion::begin() {
  displayController.begin();
  displayController.drawLogo();
  delay(2000);
}
