#include "minmax.hpp"

int MinMax::max(int a, int b, int c)
{
  if (a > b && a > c) {
    return a;
  }else if (b > a && b > c) {
    return b;
  }else {
    return c;
  }
}

int MinMax::min(int a, int b, int c)
{
  return -max(-a, -b, -c);
}
