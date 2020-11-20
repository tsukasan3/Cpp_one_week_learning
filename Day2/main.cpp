#include <iostream>
#include "sample.hpp"

using namespace std;

int main() {
  Csample obj;
  int num;

  cout << "整数を入力してください：";
  cin >> num;

  obj.set(num);
  cout << obj.get() << endl;

  return 0;
}
