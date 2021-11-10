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

//----------------- task B -----------------

Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2)
{
  int dist1 = length(p1);
  int dist2 = length(p2);

  if (dist1 > dist2)
    return p1;
  else
    return p2;
}
