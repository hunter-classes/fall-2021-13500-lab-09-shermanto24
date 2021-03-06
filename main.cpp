#include <iostream>

#include "funcs.h"

int main()
{
  //task A
  std::cout << "Task A\n" << '\n';

  Coord3D point1 = {10, 20, 30};
  std::cout << "point1 = {10, 20, 30}" << '\n';
  std::cout << "length(&point1) == " << length(&point1) << '\n';

  //task B
  std::cout << "\nTask B\n" << '\n';

  Coord3D point2 = {-40, 21, -22};
  std::cout << "point1 = {10, 20, 30}" << '\n';
  std::cout << "point2 = {-40, 21, -22}" << '\n';

  std::cout << "\nAddress of point1: " << &point1 << '\n';
  std::cout << "Address of point2: " << &point2 << '\n';

  std::cout << "\npoint2 should be farther from the origin" << '\n';
  std::cout << "fartherFromOrigin(&point1, &point2) == " << fartherFromOrigin(&point1, &point2) << '\n';

  //task C
  std::cout << "\nTask C\n" << '\n';

  Coord3D pos = {0, 0, 100.0};
  Coord3D vel = {1, -5, 0.2};
  std::cout << "pos = {0, 0, 100.0}" << '\n';
  std::cout << "vel = {1, -5, 0.2}" << '\n';

  move(&pos, &vel, 2.0);
  std::cout << "\nAfter calling move(&pos, &vel, 2.0)," << '\n';
  std::cout << "pos = {" << pos.x << ", " << pos.y << ", " << pos.z << "}" << '\n';

  //task E
  std::cout << "\nTask E\n" << '\n';

  Coord3D *ppos = createCoord3D(10, 20, 30);
  Coord3D *pvel = createCoord3D(5.5, -1.4, 7.77);
  std::cout << "*ppos = {10, 20, 30}" << '\n';
  std::cout << "*pvel = {5.5, -1.4, 7.77}" << '\n';

  move(ppos, pvel, 10.0);
  std::cout << "*ppos after 10 seconds = {"
            << (*ppos).x << ", " << (*ppos).y << ", " << (*ppos).z << "}" << '\n';

  deleteCoord3D(ppos);
  deleteCoord3D(pvel);

  return 0;
}
