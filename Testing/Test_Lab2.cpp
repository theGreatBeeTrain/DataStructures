// #include "../Lab2/laba2.h"
#include "catch2/catch.hpp"

#ifdef LAB2_TEST

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

#endif