#include<iostream>
#include"template.h"

using namespace std;
using std::cout;
using std::cin;
using std::endl;

#define delimetr "===================================="

void main() {

	setlocale(LC_ALL, "");

	int Number_1 = 12;
	int Number_2 = 5;

	int* pNumber_1 = &Number_1;
	int* pNumber_2 = &Number_2;
	cout << &Number_1 << endl;
	cout << &Number_2 << endl;
	cout << &Number_2 - &Number_1<<endl;
	
	cout << Sum(&Number_1, &Number_2) << endl;
	cout << Sum(&Number_1, &Number_2)<<endl;

	int number_0 = 18;
	int* pNumber_0 = &number_0;
	cout<<"pNumber_0\t" << pNumber_0 << endl;
	double number_d = 2.89;
	double* pNumber_d = &number_d;
	cout << "pNumber_d\t" << pNumber_d << endl;

	const int n = 5;
	int arr[n] = { 2,5,65,8,0 };

	cout << delimetr << endl;
	for (int i = 0; i < n; i++) {
		cout << arr[i] << "\t";
	}
	cout << endl;
	cout << delimetr << endl;
	int* pArr[n];

	for (int i = 0; i < n; i++) {
		cout << pArr+i << "\t";
	}
	cout << endl;
	cout << delimetr << endl;
	cout << Avg(pNumber_1, pNumber_2) << endl;


}
