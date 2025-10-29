#define CATCH_CONFIG_MAIN
#include "../catch2/catch.hpp"
#include "../Sem1/sorting/include/InsertionSort.h"
#include "../Sem1/sorting/include/SelectionSort.h"
#include "../Sem1/sorting/include/ExchangeSort.h"
#include "../Sem1/sorting/include/BubbleSort.h"
#include "../Sem1/sorting/include/BubbleSortOptimized.h"

#ifdef INSERTION_SORT
TEST_CASE("Testing InsertionSort") {

		std::vector<int> vInt, vIntExpected;

		vInt = {};
		vIntExpected = {};
		InsertionSort(vInt);
		REQUIRE(vInt == vIntExpected);

		vInt = { 1, 2, 3, 4, 5, 6 };
		vIntExpected = { 1, 2, 3, 4, 5, 6 };
		InsertionSort(vInt);
		REQUIRE(vInt == vIntExpected);

		vInt = { 6, 5, 4, 3, 2, 1 };
		vIntExpected = { 1, 2, 3, 4, 5, 6 };
		InsertionSort(vInt);
		REQUIRE(vInt == vIntExpected);

		vInt = { 0, 0, 0, 0, 0, 0 };
		vIntExpected = { 0, 0, 0, 0, 0, 0 };
		InsertionSort(vInt);
		REQUIRE(vInt == vIntExpected);
}
#endif //INSERTION_SORT

#ifdef SELECTION_SORT
TEST_CASE("Testing SelectionSort") {

	std::vector<int> vInt, vIntExpected;

	vInt = {};
	vIntExpected = {};
	SelectionSort(vInt);
	REQUIRE(vInt == vIntExpected);

	vInt = { 1, 2, 3, 4, 5, 6 };
	vIntExpected = { 1, 2, 3, 4, 5, 6 };
	SelectionSort(vInt);
	REQUIRE(vInt == vIntExpected);

	vInt = { 6, 5, 4, 3, 2, 1 };
	vIntExpected = { 1, 2, 3, 4, 5, 6 };
	SelectionSort(vInt);
	REQUIRE(vInt == vIntExpected);

	vInt = { 0, 0, 0, 0, 0, 0 };
	vIntExpected = { 0, 0, 0, 0, 0, 0 };
	SelectionSort(vInt);
	REQUIRE(vInt == vIntExpected);
}
#endif //SELECTION_SORT

#ifdef EXCHANGE_SORT
TEST_CASE("Testing ExchangeSort") {

	std::vector<int> vInt, vIntExpected;

	vInt = {};
	vIntExpected = {};
	ExchangeSort(vInt);
	REQUIRE(vInt == vIntExpected);

	vInt = { 1, 2, 3, 4, 5, 6 };
	vIntExpected = { 1, 2, 3, 4, 5, 6 };
	ExchangeSort(vInt);
	REQUIRE(vInt == vIntExpected);

	vInt = { 6, 5, 4, 3, 2, 1 };
	vIntExpected = { 1, 2, 3, 4, 5, 6 };
	ExchangeSort(vInt);
	REQUIRE(vInt == vIntExpected);

	vInt = { 0, 0, 0, 0, 0, 0 };
	vIntExpected = { 0, 0, 0, 0, 0, 0 };
	ExchangeSort(vInt);
	REQUIRE(vInt == vIntExpected);
}
#endif //EXCHANGE_SORT

#ifdef BUBBLE_SORT
TEST_CASE("Testing BubbleSort") {

	std::vector<int> vInt, vIntExpected;

	vInt = {};
	vIntExpected = {};
	BubbleSort(vInt);
	REQUIRE(vInt == vIntExpected);

	vInt = { 1, 2, 3, 4, 5, 6 };
	vIntExpected = { 1, 2, 3, 4, 5, 6 };
	BubbleSort(vInt);
	REQUIRE(vInt == vIntExpected);

	vInt = { 6, 5, 4, 3, 2, 1 };
	vIntExpected = { 1, 2, 3, 4, 5, 6 };
	BubbleSort(vInt);
	REQUIRE(vInt == vIntExpected);

	vInt = { 0, 0, 0, 0, 0, 0 };
	vIntExpected = { 0, 0, 0, 0, 0, 0 };
	BubbleSort(vInt);
	REQUIRE(vInt == vIntExpected);
}
#endif //BUBBLE_SORT

#ifdef BUBBLE_SORT_OPTIMIZED
TEST_CASE("Testing BubbleSortOptimized") {

	std::vector<int> vInt, vIntExpected;

	vInt = {};
	vIntExpected = {};
	BubbleSortOptimized(vInt);
	REQUIRE(vInt == vIntExpected);

	vInt = { 1, 2, 3, 4, 5, 6 };
	vIntExpected = { 1, 2, 3, 4, 5, 6 };
	BubbleSortOptimized(vInt);
	REQUIRE(vInt == vIntExpected);

	vInt = { 6, 5, 4, 3, 2, 1 };
	vIntExpected = { 1, 2, 3, 4, 5, 6 };
	BubbleSortOptimized(vInt);
	REQUIRE(vInt == vIntExpected);

	vInt = { 0, 0, 0, 0, 0, 0 };
	vIntExpected = { 0, 0, 0, 0, 0, 0 };
	BubbleSortOptimized(vInt);
	REQUIRE(vInt == vIntExpected);
}
#endif //BUBBLE_SORT_OPTIMIZED
