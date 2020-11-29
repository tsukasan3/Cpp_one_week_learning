#ifndef AMBULANCE_H
#define AMBULANCE_H

#include "car.h"

class Ambulance : public Car{
public:
  Ambulance();
  virtual ~Ambulance();

  void savePeople();
private:
  int m_number;
};

#endif // AMBULANCE_H
