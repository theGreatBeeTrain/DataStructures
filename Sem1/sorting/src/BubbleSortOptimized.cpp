#include "../include/BubbleSortOptimized.h"

template <typename T>
int BubbleSortOptimized(std::vector<T>& target) {

	int l = target.size(), a;
	T c;

	for (int i = l - 1; i > 0; i -= a) {
		a = 1;
		for (int j = 0; j < i; j++)
			if (target[j] > target[j + 1]) {
				c = target[j];
				target[j] = target[j + 1];
				target[j + 1] = c;
				a = 1;
			}
			else
				a++;
	}

	return 0;
}

template int BubbleSortOptimized(std::vector<int>& target);