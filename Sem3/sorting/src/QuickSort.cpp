#include "../include/QuickSort.h"

template<typename T>
int QuickSort(std::vector<T>& target, int start, int end)
{
	if (end == -1) end = target.size();
	if (end - start < 1) return 0;

	int i = start, j = end - 1;
	T pivot = target[j];

	while (j > i) {
		if (target[i] < pivot)
			i++;
		else {
			target[j] = target[i];
			j--;
			target[i] = target[j];
		}
	}

	target[j] = pivot;
	QuickSort(target, start, j);
	QuickSort(target, j + 1, end);

	return 0;
}
template int QuickSort<int>(std::vector<int>& arr, int start, int end);
template int QuickSort<long>(std::vector<long>& arr, int start, int end);
template int QuickSort<float>(std::vector<float>& arr, int start, int end);
template int QuickSort<double>(std::vector<double>& arr, int start, int end);