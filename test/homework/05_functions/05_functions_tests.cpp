#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "func.h"
#include<vector>

using std::vector;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify Vector Max Value")
{
	REQUIRE(get_vector_max_value({5,7,-1,99,-100,10}) == 99);
	REQUIRE(get_vector_max_value({-50,0,-51,50,-99,-100}) == 50);
	REQUIRE(get_square_of_each_element({3,7,2,5,10}) == vector<int>{9,49,4,25,10});
	REQUIRE(get_square_of_each_element({6,1,8,9,4}) == vector<int>{36,1,64,81,16});

}