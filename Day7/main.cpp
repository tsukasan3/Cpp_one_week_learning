#include<iostream>
#include "calc.h"

using namespace std;

int main(){
  Calc *pc1, *pc2;
  pc1 = new Calc();
  pc2 = new Calc(1,2);
  cout << 3 << "+" << 4 << pc1->add(3,4) << "=" << endl;
  cout << pc2->getA() << "+" << pc2->getB() << pc2->add() << "=" << endl;
  delete pc1;
  delete pc2;
  return 0;
}
