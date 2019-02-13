#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "ManyFunctions.h"


TEST_CASE ( "A test runs", "[filler]") {
    REQUIRE( 1 == 1);
}
