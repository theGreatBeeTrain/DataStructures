#include "../include/SelectionSort.h"

template <typename T>
int SelectionSort(std::vector<T>& target) {

	int si, l = target.size();
	T c;

	for (int i = 0; i < l - 1; i++) {
		si = i;
		for (int j = i + 1; j < l; j++)
			if (target[si] > target[j])
				si = j;
		if (target[i] != target[si]) {
			c = target[i];
			target[i] = target[si];
			target[si] = c;
		}
	}

	return 0;
};
template int SelectionSort<int>(std::vector<int>& arr);