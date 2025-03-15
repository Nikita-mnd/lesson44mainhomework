#include <iostream>
using namespace std;

int min(int* m, int size) {
	int min = 0;
	for (int i = 0;i <= size;i++) {
		int num = m[i];
		num *= m[i] < 0 ? -1 : 1;
		if (m[min] > num) {
			min = i;
		}
	}
	return min;
}

int max(int* m, int size) {
	int max = 0;
	for (int i = 0;i <= size;i++) {
		int num = m[i];
		num *= m[i] < 0 ? -1 : 1;
		if (m[max] > num) {
			max = i;
		}
	}
	return max;
}

int sum(int* m, int size) {
	if (size <= 0) {
		return 0;
	}
	int start = min(m, size);
	int end = max(m, size);
	if (start > end) {
		swap(start, end);
	}
	int sum = 0;
	for (int i = start;i < end;i++) {
		sum += m[i];
	}
	return sum;
}