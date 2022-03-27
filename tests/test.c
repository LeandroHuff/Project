#include "sum.h"

// this tells catch to provide a main()
// only do this in one cpp file
//#define CATCH_CONFIG_MAIN
//#include <catch2/catch.hpp>

//#include <vector>

TEST_CASE("Sum of integers for a short vector", "[short]") 
{
  int integers[] = {1, 2, 3, 4, 5};
  
  REQUIRE(sum(integers, SIZE_INT_VECTOR(sum_integers)) == 15);
}

TEST_CASE("Sum of integers for a longer vector", "[long]") 
{
  int integers[5];
  
  for (int i = 1; i < 6; ++i) 
  {
    integers[i] *= 1000;
  }
  
  REQUIRE(sum(integers, SIZE_INT_VECTOR(integers)) == 15000);
}

