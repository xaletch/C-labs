#include<iostream>

using namespace std;

int main()
{
	//	�����������
	setlocale(LC_ALL, "Russian");
	
	int a, b;
	
	cout << "������� ����� �����: ";
	cin >> a;
	
	b = a++;
	
	cout << "���������: " << b;
};
