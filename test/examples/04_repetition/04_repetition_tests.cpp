#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test while sum of squares function")
{
	REQIORE(sum_of_squares(3) == 14);
	REQIORE(sum_of_squares(3) == 14);
	REQIORE(sum_of_squares(3) == 14);
}