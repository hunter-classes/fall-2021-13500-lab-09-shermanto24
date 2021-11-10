#include <iostream>

#include "funcs.h"

int main()
{
  //task A
  std::cout << "Task A" << '\n';
  Coord3D point1 = {10, 20, 30};
  std::cout << "point1 = {10, 20, 30}" << '\n';
  std::cout << "length(&point1) == " << length(&point1) << '\n';

  return 0;
}
