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

//----------------- task C -----------------

void move(Coord3D *ppos, Coord3D *pvel, double dt)
{
  (*ppos).x += (*pvel).x * dt;
  (*ppos).y += (*pvel).y * dt;
  (*ppos).z += (*pvel).z * dt;
}

//----------------- task E -----------------

// allocate memory and initialize
Coord3D* createCoord3D(double x, double y, double z)
{
  Coord3D *coord = new Coord3D;
  (*coord).x = x;
  (*coord).y = y;
  (*coord).z = z;
  return coord;
}

// free memory
void deleteCoord3D(Coord3D *p)
{
  delete p;
}
