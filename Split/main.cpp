#include"stdafx.h"

void main()
{
	setlocale(LC_ALL, "");
	const int size = 10;
	int array_numbers[size];
	Random_array(array_numbers, size);
	Print(array_numbers, size);
	cout << lins << endl;
	//������� �������� ������ � �������� ���������
	int even_count = 0;
	int odd_count = 0;
	//������� ���������� ������ � �������� ��������� � �������
	for (int i = 0; i < size; i++) {
		if (array_numbers[i] % 2 == 0) even_count++;
		else odd_count++;
	}
	//�������� ������������ ������ ��� ������� ������ � �������� �����
	int* array_even = new int[even_count];
	int* array_odd = new int[odd_count];
	//��������� �������
	for (int i = 0, j = 0, k = 0; i < size; i++) {
		if (array_numbers[i] % 2 == 0) array_even[j++] = array_numbers[i];
		else array_odd[k++] = array_numbers[i];
	}
	cout << ev<<"\t";
	Print(array_even, even_count);
	cout << od<<"\t";
	Print(array_odd, odd_count);

	//������� ���������� ������
	delete[]array_even;
	delete[]array_odd;
	//������� ��������� �� ��������� ������
	array_even = nullptr;
	array_odd = nullptr;
	
}