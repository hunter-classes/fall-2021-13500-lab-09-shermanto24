#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

//----------------- task A -----------------

TEST_CASE("length: positive coordinates and 0")
{
  Coord3D p1 = {3, 4, 12};
  CHECK( length(&p1) == 13.0 );

  Coord3D p2 = {0, 3, 4};
  CHECK( length(&p2) == 5.0 );

  Coord3D p3 = {0, 0, 0};
  CHECK( length(&p3) == 0.0 );
}

TEST_CASE("length: negative coordinates and 0")
{
  Coord3D p1 = {-3, -4, -12};
  CHECK( length(&p1) == 13.0 );

  Coord3D p2 = {-8, 0, -6};
  CHECK( length(&p2) == 10.0 );
}

//----------------- task B -----------------

TEST_CASE("fartherFromOrigin tests")
{
  Coord3D p1 = {1, -2, 3};
  Coord3D p2 = {10, 0, 5};
  CHECK( fartherFromOrigin(&p1, &p2) == &p2 );
  CHECK( fartherFromOrigin(&p2, &p1) == &p2 );

  Coord3D p3 = {15, 25, 35};
  Coord3D p4 = {100, 0, 0};
  CHECK( fartherFromOrigin(&p3, &p4) == &p4 );

  Coord3D p5 = {100, 1, 0};
  CHECK( fartherFromOrigin(&p4, &p5) == &p5 );

  CHECK( fartherFromOrigin(&p1, &p3) == &p3 );
  CHECK( fartherFromOrigin(&p4, &p2) == &p4 );
}

//----------------- task C -----------------

TEST_CASE("move tests")
{
  Coord3D pos1 = {0, 0, 0};
  Coord3D vel1 = {1, 2, 3};

  move(&pos1, &vel1, 3.0);
  CHECK( pos1.x == 3.0 );
  CHECK( pos1.y == 6.0 );
  CHECK( pos1.z == 9.0 );

  Coord3D vel2 = {-3, 2, 0.5};
  move(&pos1, &vel2, 2.0);
  CHECK( pos1.x == -3.0 );
  CHECK( pos1.y == 10.0 );
  CHECK( pos1.z == 10.0 );

  Coord3D vel3 = {5, -10, 2};
  move(&pos1, &vel3, 0.1);
  CHECK( pos1.x == -2.5 );
  CHECK( pos1.y == 9.0 );
  CHECK( pos1.z == 10.2 );
}

//----------------- task E -----------------

TEST_CASE("createCoord3D and deleteCoord3D tests")
{
  Coord3D *pos1 = createCoord3D(10, 20, 30);
  CHECK( (*pos1).x == 10.0 );
  CHECK( (*pos1).y == 20.0 );
  CHECK( (*pos1).z == 30.0 );

  Coord3D *vel1 = createCoord3D(5, -2.5, 10);
  CHECK( (*vel1).x == 5.0 );
  CHECK( (*vel1).y == -2.5 );
  CHECK( (*vel1).z == 10.0 );

  move(pos1, vel1, 4.0);
  CHECK( (*pos1).x == 30.0 );
  CHECK( (*pos1).y == 10.0 );
  CHECK( (*pos1).z == 70.0 );

  deleteCoord3D(pos1);
  deleteCoord3D(vel1);
}
