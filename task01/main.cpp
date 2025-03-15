#include <iostream>
using namespace std;
int sum(int* m, int size);
int main(){
	cout << "input size of masive: ";
	int size;
	cin >> size;
	int* m = new int[size];

	for (int i = 0;i <= size;i++) {
		m[i] = rand() / 10;
	}
	int result = sum(m, size);
	cout << "sum of number: " << result;
	delete[] m;
	return 0;
}