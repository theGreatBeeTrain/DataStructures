#include "../include/ExchangeSort.h"

template<typename T>
int ExchangeSort(std::vector<T>& target) {

	int l = target.size();
	T c;

	for (int i = 0; i < l - 1; i++) {
		for (int j = i + 1; j < l; j++)
			if (target[i] > target[j]) {
				c = target[i];
				target[i] = target[j];
				target[j] = c;
			}
	}

	return 0;
};

template int ExchangeSort<int>(std::vector<int>& arr);