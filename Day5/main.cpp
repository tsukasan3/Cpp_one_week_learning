#include "rat.hpp"
#include <iostream>

using namespace std;

int main() {
  Rat *r1, *r2, *r3;
  r1 = new Rat();
  r1->squeak();
  Rat::shownum();
  r2 = new Rat();
  r3 = new Rat();
  r2->squeak();
  r3->squeak();
  delete r1;
  delete r2;
  Rat::shownum();
  delete r3;
  Rat::shownum();
  return 0;
}
