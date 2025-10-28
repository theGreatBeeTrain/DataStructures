#include "../catch2/catch.hpp"
#include "../Sem1/sorting/include/InsertionSort.h"
#include "../Sem1/sorting/include/SelectionSort.h"
#include "../Sem1/sorting/include/ExchangeSort.h"
#include "../Sem1/sorting/include/BubbleSort.h"
#include "../Sem1/sorting/include/BubbleSortOptimized.h"

#define S1 false
#define S1_INSERTION true
#define S1_SELECTION true
#define S1_EXCHANGE true
#define S1_BUBBLE true
#define S1_BUBBLEOPTIMIZED true

TEST_CASE() {

	if (S1_INSERTION || S1) {

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

}

#ifdef S1_SELECTION

#endif // S1_SELECTION
