#include "calc.h"

Calc::Calc() : m_a(0), m_b(0)
{
}
Calc::Calc(int a, int b) : m_a(a), m_b(b)
{
}

int Calc::add(){
  return  m_a + m_b;
}
int Calc::add(int a, int b){
  return a + b;
}

void Calc::setValue(int a, int b){
  m_a = a;
  m_b = b;
}
int Calc::getA(){
  return m_a;
}
int Calc::getB(){
  return m_b;
}
