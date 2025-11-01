#define CATCH_CONFIG_MAIN
#include "../Lab2/laba2.h"
#include "catch2/catch.hpp"

TEST_CASE("lol") {

	char* str = readStringMalloc();
	std::cout << str << std::endl;

	free(str);
	str = readStringCalloc();
	std::cout << str << std::endl;

	free(str);
	str = fileToArr();
	std::cout << str << std::endl;


}
