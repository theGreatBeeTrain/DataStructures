//#include "../Lab2/laba2.h"
#include "catch2/catch.hpp"
#include <iostream>

//#define LAB2_TEST_BASE
//#define LAB2_TEST_OVERFLOW_1
#define LAB2_TEST_OVERFLOW_2

#ifdef LAB2_TEST
#ifdef LAB2_TEST_BASE

TEST_CASE("base test") {

	char* str = readStringMalloc();
	std::cout << str << std::endl;

	free(str);
	str = readStringCalloc();
	std::cout << str << std::endl;

	/*free(str);
	str = fileToArr();
	std::cout << str << std::endl;*/

}
#endif
#ifdef LAB2_TEST_OVERFLOW_1
TEST_CASE("overflow test") {

	char* a = NULL;
	for (int i = 0; i < 500000; i++) {
		a = putCharMalloc(a, i, '1');
	}
	//std::cout << a << std::endl;

}
#endif
#ifdef LAB2_TEST_OVERFLOW_2
TEST_CASE("overflow test") {

	char* a = NULL;
	for (int i = 0; i < 500000; i++) {
		a = putCharRealloc(a, i, '1');
	}
	std::cout << a << std::endl;

}
#endif
#endif