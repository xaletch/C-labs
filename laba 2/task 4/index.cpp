#include<iostream>

using namespace std;

int main()
{
	//	�����������
	setlocale(LC_ALL, "Russian");
	
	int a, b, c;
	
	cout << "������� ��� ����� �����: ";
	cin >> a >> b >> c;
	
	//	�������� ����� �����
	int sum = a + b + c;
	
	//	������������
	int proizvedenie = a * b * c;
	
	// ������� ��������������
	int arithmetic = (sum) / 3; // SUM - ���������� ������� ������ a + b + c
	
	cout << "�����: " << sum << "\n";
	cout << "������������: " << proizvedenie << "\n";
	cout << "C������ ��������������: " << arithmetic;
};
