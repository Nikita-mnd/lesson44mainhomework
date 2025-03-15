#include <iostream>
using namespace std;

int min(int* m, int size) {
	int min = 0;
	for (int i = 0;i <= size;i++) {
		if (m[min] > m[i]) {
			min = i;
		}
	}
	return min;
}

int max(int* m, int size) {
	int max = 0;
	for (int i = 0;i <= size;i++) {
		if (m[max] > m[i]) {
			max = i;
		}
	}
	return max;
}

