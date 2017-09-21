#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "hello.h"
#include <sstream>

TEST_CASE("Hello", "Test") {
	std::stringstream out;
	hello(out);
	REQUIRE ( out.str() == "Hello world!\n");
}
