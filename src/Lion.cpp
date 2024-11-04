#include <Lion.h>

Display* Lion::display() {  return &displayController; }

void Lion::begin() {
  displayController.begin();
  displayController.drawLogo();
  delay(2000);
}
