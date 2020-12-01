#ifndef CALC_H
#define CALC_H

class Calc{
private:
  int m_a, m_b;
public:
  Calc();
  Calc(int a, int b);

  int add();
  int add(int a, int b);

  void setValue(int a, int b);
  int getA();
  int getB();
};

#endif // CALC_H
