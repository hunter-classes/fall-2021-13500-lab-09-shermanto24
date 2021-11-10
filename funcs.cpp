#include <iostream>
#include <cmath>
#include "funcs.h"

//----------------- task A -----------------

double length(Coord3D *p)
{
  double px = (*p).x;
  double py = (*p).y;
  double pz = (*p).z;

  return sqrt(px*px + py*py + pz*pz);
}
