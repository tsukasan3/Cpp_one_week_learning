#ifndef CAR_H
#define CAR_H

class Car{
public:
  Car();
  virtual ~Car();
  void move();
  void supply(int fuel);
private:
  int m_fuel;
  int m_migration;
};

#endif // CAR_H
