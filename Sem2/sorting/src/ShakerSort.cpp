#include "../include/ShakerSort.h"

template <typename T>
int ShakerSort(std::vector<T>& target) {

	int l = target.size(), f = 1, a = 0, b = l - 1, s = 1;
	T c;

	for (int i = 0; i < l; i++) {
		f = 0;
		if (!(i % 2)) {
			for (int j = a; j < b; j++) {
				if (target[j] > target[j+1]) {
					s = 0;
					f = 1;
					c = target[j];
					target[j] = target[j + 1];
					target[j + 1] = c;
				}
				s++;
			}
			b -= s;
		}
		else {
			for (int j = b; j > a; j--) {
				if (target[j - 1] > target[j]) {
					s = 0;
					f = 1;
					c = target[j - 1];
					target[j - 1] = target[j];
					target[j] = c;
				}
				s++;
			}
			a += s;
		}
		if (!f) return 0;
	}
	
	return 0;
}

template int ShakerSort<int>(std::vector<int>& arr);
template int ShakerSort<long>(std::vector<long>& arr);
template int ShakerSort<float>(std::vector<float>& arr);
template int ShakerSort<double>(std::vector<double>& arr);

