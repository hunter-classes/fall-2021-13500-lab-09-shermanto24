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
