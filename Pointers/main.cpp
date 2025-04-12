#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

void main() {
	setlocale(LC_ALL, "");
	cout << "Hello Pointer" << endl;
	int a = 2;
	int* pa = &a;
	cout << a << endl;//вывод переменной на экран
	cout << &a << endl;// взятие адреса переменной при выводе
	cout << pa << endl;
	cout << *pa << endl;
}