#include "number.hpp"
#include <iostream>

using namespace std;

Number::Number(): a(0), b(0)
{

}
Number::~Number()
{
  cout << "Numberオブジェクトを破棄" << endl;
}
//  二つの数値を設定
void Number::setNumbers(int n1, int n2)
{
  a = n1;
  b = n2;
}
int Number::getAdd()
{
  return a + b;
}
