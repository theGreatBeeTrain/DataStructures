#include "../include/ShellSort.h"

template<typename T>
int ShellSort(std::vector<T>& target)
{

	T temp;
	int size = target.size();
	int l1, l2;
	for (int step = size / 2; step >= 1; step /= 2) {
		for (int s = 0; s < step; s++) {

			l1 = size;
			l2 = l1 - step;
			for (int i1 = s; i1 < l1; i1 += step) {
				for (int i2 = s; i2 < l2; i2 += step) {
					if (target[i2] > target[i2 + step]) {
						temp = target[i2];
						target[i2] = target[i2 + step];
						target[i2 + step] = temp;
					}
				}
				l2 -= step;
			}

		}
	}
	

	return 0;
}

template int ShellSort<int>(std::vector<int>& arr);
template int ShellSort<long>(std::vector<long>& arr);
template int ShellSort<float>(std::vector<float>& arr);
template int ShellSort<double>(std::vector<double>& arr);