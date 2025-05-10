#include "functions.h"

void Print(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << "\t";
	}cout << endl;
}
void Random_array(int* arr, const int n)
{
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 100;
	}
}