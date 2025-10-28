#include "../include/InsertionSort.h"

template<typename T>
int InsertionSort(std::vector<T>& target)
{
	T c;
	int l = target.size(), j;

	for (int i = 1; i < l; i++) {
		c = target[i];
		for (j = i; j > 0; j--) {
			if (target[j - 1] > c) {
				target[j] = target[j - 1];
			}
			else {
				break;
			}
		}
		target[j] = c;
	}

	return 0;
}

template int InsertionSort<int>(std::vector<int>& arr);