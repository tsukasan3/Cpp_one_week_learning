#ifndef NUMBER_HPP
#define NUMBER_HPP

class Number{
private:
  int a;
  int b;
public:
  Number();
  ~Number();
  //  二つの数値を設定
  void setNumbers(int n1, int n2);
  //  二つの数の和を取得
  int getAdd();
};

#endif // _NUMBER_H_