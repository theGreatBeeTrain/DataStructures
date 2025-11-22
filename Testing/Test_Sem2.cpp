#include "catch2/catch.hpp"
//#include "../Sem2/sorting/include/ShakerSort.h"
//#include "../Sem2/sorting/include/InsertionSortBinary.h"

#ifdef SHAKER_SORT
TEST_CASE("Testing ShakerSort") {

	std::vector<int> vInt, vIntExpected;

	vInt = {};
	vIntExpected = {};
	ShakerSort(vInt);
	REQUIRE(vInt == vIntExpected);

	vInt = { 1, 2, 3, 4, 5, 6 };
	vIntExpected = { 1, 2, 3, 4, 5, 6 };
	ShakerSort(vInt);
	REQUIRE(vInt == vIntExpected);

	vInt = { 6, 5, 4, 3, 2, 1 };
	vIntExpected = { 1, 2, 3, 4, 5, 6 };
	ShakerSort(vInt);
	REQUIRE(vInt == vIntExpected);

	vInt = { 0, 0, 0, 0, 0, 0 };
	vIntExpected = { 0, 0, 0, 0, 0, 0 };
	ShakerSort(vInt);
	REQUIRE(vInt == vIntExpected);

	vInt = { 99, 145, 333, 1, 9001, -1 };
	vIntExpected = { -1, 1, 99, 145, 333, 9001 };
	ShakerSort(vInt);
	REQUIRE(vInt == vIntExpected);

}
#endif // SHAKER_SORT

#ifdef INSERTION_SORT_BINARY
TEST_CASE("Testing InsertionSortBinary") {

	std::vector<int> vInt, vIntExpected;

	vInt = {};
	vIntExpected = {};
	InsertionSortBinary(vInt);
	REQUIRE(vInt == vIntExpected);

	vInt = { 1, 2, 3, 4, 5, 6 };
	vIntExpected = { 1, 2, 3, 4, 5, 6 };
	InsertionSortBinary(vInt);
	REQUIRE(vInt == vIntExpected);

	vInt = { 6, 5, 4, 3, 2, 1 };
	vIntExpected = { 1, 2, 3, 4, 5, 6 };
	InsertionSortBinary(vInt);
	REQUIRE(vInt == vIntExpected);

	vInt = { 0, 0, 0, 0, 0, 0 };
	vIntExpected = { 0, 0, 0, 0, 0, 0 };
	InsertionSortBinary(vInt);
	REQUIRE(vInt == vIntExpected);

	vInt = { 99, 145, 333, 1, 9001, -1 };
	vIntExpected = { -1, 1, 99, 145, 333, 9001 };
	InsertionSortBinary(vInt);
	REQUIRE(vInt == vIntExpected);

}
#endif // INSERTION_SORT_BINARY