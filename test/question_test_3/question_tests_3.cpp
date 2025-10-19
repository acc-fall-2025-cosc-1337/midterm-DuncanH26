#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}


TEST_CASE("Verify find_gcd function"){

	REQUIRE(find_gdc(15, 25) == )5;
	REQUIRE(find_gdc(16, 32) == 16);
	REQUIRE(find_gdc(159, 309) == 3);

}