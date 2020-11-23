#include "car.hpp"
#include <iostream>

using namespace std;

int main() {
  Car* pc = 0;
  pc = new Car();
  pc->supply(10);
  pc->move();
  pc->move();
  delete pc;
  cout << "インスタンスの消去終了" << endl;
  return 0;
}
