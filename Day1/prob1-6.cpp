#include <iostream>
#include <string>

using namespace std;

int main() {
  string f, l;
  cout << "姓を入力：";
  cin >> l;
  cout << "名を入力：";
  cin >> f;
  cout << "名前は「" << l+f << "」です。" << endl;
  return 0;
}
