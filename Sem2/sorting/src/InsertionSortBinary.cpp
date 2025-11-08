#include "../include/InsertionSortBinary.h"

template<typename T>
int InsertionSortBinary(std::vector<T>& target)
{
	T c;
	int l = target.size(), n, i0, i1;

	for (int i = 1; i < l; i++) {
		if (target[i] < target[i - 1]) {
			c = target[i];
			i0 = 0;
			i1 = i - 1;

			do {
				n = (i0 + i1) / 2;
				if (target[n] == c) break;
				else if (target[n] > c) i1 = n;
				else i0 = n;
			} while (i0 != i1);

			for (int j1 = i; j1 > n; j1--) if (target[j1] != target[j1 - 1]) target[j1] = target[j1 - 1];
			target[n] = c;
		}
	}

	return 0;
}
template int InsertionSortBinary<int>(std::vector<int>& arr);
template int InsertionSortBinary<long>(std::vector<long>& arr);
template int InsertionSortBinary<float>(std::vector<float>& arr);
template int InsertionSortBinary<double>(std::vector<double>& arr);
