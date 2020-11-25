#ifndef RAT_HPP
#define RAT_HPP

class Rat{
public:
  Rat();
  ~Rat();

  static void shownum();

  void squeak();
private:
  int m_id;
  static int m_count;
};

#endif // RAT_HPP
