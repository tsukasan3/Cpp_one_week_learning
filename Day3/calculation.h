#ifndef CALCULATION_H
#define CALCULATION_H

#include <iostream>

using namespace std;

class Calculation{
private:
  int m_number1;
  int m_number2;
public:
  void setNumber1(int n);
  void setNumber2(int n);
  int getNumber1();
  int getNumber2();
  int add();
  int sub();
};

#endif // CALCULATION_H
