#include "car.h"
#include<iostream>

using namespace std;

Car::Car() : m_fuel(0), m_migration(0)
{
  cout << "Carオブジェクト生成" << endl;
}
Car::~Car()
{
  cout << "Carオブジェクト破棄" << endl;
}
void Car::move()
{
  if(m_fuel >= 0){
    m_migration++;
    m_fuel--;
  }
  cout << "移動距離：" << m_migration << endl;
  cout << "燃料：" << m_fuel << endl;
}
void Car::supply(int fuel)
{
  if(fuel>0){
    m_fuel += fuel;
  }

  cout << "燃料" << m_fuel << endl;
}
