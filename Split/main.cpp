#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];

	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 100;
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << "\t";
	}
	cout << endl;
	int* even = new int[n];
	int* odd = new int[n];

	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			even[i] = arr[i];

		}
		else  {
			odd[i] = arr[i];
		}
	}
	for (int i = 0; i < n; i++) {
		cout << even[i] << "\t";

	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		cout << odd[i] << "\t";
	 }
		delete[] even;
		delete[] odd;

	



}