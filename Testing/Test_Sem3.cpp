#include "catch2/catch.hpp"
#include "../Sem3/sorting/include/QuickSort.h"

#ifdef QUICK_SORT

TEST_CASE("Testing QuickSort") {

	std::vector<int> vInt, vIntExpected;

	vInt = {};
	vIntExpected = {};
	QuickSort(vInt);
	REQUIRE(vInt == vIntExpected);

	vInt = { 1, 2, 3, 4, 5, 6 };
	vIntExpected = { 1, 2, 3, 4, 5, 6 };
	QuickSort(vInt);
	REQUIRE(vInt == vIntExpected);

	vInt = { 6, 5, 4, 3, 2, 1 };
	vIntExpected = { 1, 2, 3, 4, 5, 6 };
	QuickSort(vInt);
	REQUIRE(vInt == vIntExpected);

	vInt = { 0, 0, 0, 0, 0, 0 };
	vIntExpected = { 0, 0, 0, 0, 0, 0 };
	QuickSort(vInt);
	REQUIRE(vInt == vIntExpected);

	vInt = { 99, 145, 333, 1, 9001, -1 };
	vIntExpected = { -1, 1, 99, 145, 333, 9001 };
	QuickSort(vInt);
	REQUIRE(vInt == vIntExpected);

	// темплейты не работают мне плохо(((
	// надо было раньше проверять лол
	// пофигу, утром сделаю
	/*
	std::vector<double> vDouble = { 9999.1, 99999.2, 99.3, 999.4 };
	std::vector<double> vDoubleExpected = { 99.3, 999.4, 9999.1, 99999.2 };
	QuickSort(vInt);
	REQUIRE(vDouble == vDoubleExpected);
	*/

}

#endif // QUICK_SORT
