#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "if.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test overtime function")
{
	REQUIRE(overtime(30)== false);
	REQUIRE(overtime(49)== false);
	REQUIRE(overtime(41)== true);
}
