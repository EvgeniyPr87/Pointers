#include"stdafx.h"

void main()
{
	setlocale(LC_ALL, "");
	const int size = 10;
	int array_numbers[size];
	Random_array(array_numbers, size);
	Print(array_numbers, size);
	cout << lins << endl;
	//создаем счетчики четных и нечетных элементов
	int even_count = 0;
	int odd_count = 0;
	//считаем количество четных и нечетных элементов в массиве
	for (int i = 0; i < size; i++) {
		if (array_numbers[i] % 2 == 0) even_count++;
		else odd_count++;
	}
	//выделяем динамическую память под массивы четных и нечетных чисел
	int* array_even = new int[even_count];
	int* array_odd = new int[odd_count];
	//заполняем массивы
	for (int i = 0, j = 0, k = 0; i < size; i++) {
		if (array_numbers[i] % 2 == 0) array_even[j++] = array_numbers[i];
		else array_odd[k++] = array_numbers[i];
	}
	cout << ev<<"\t";
	Print(array_even, even_count);
	cout << od<<"\t";
	Print(array_odd, odd_count);

	//удаляем выделенную память
	delete[]array_even;
	delete[]array_odd;
	//удаляем указатели на удаленную память
	array_even = nullptr;
	array_odd = nullptr;
	
}