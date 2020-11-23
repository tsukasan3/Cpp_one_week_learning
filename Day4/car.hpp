#ifndef CAR_HPP
#define CAR_HPP

class Car{
public:
  //コンストラクタ
  Car();
  // デストラクタ
  ~Car();
  void move();
  void supply(int fuel);
private:
  int m_migration; // 移動距離
  int m_fuel; // 燃料
};

#endif // CAR_HPP
