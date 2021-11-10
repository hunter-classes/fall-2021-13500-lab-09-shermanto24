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
