#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	//	�����������
	setlocale(LC_ALL, "Russian");
	
	float a1, a2;
	float b1, b2;
	
	cout << "������� ���������� ����� A: ";
	cin >> a1 >> a2;
	
	cout << "������� ���������� ����� B: ";
	cin >> b1 >> b2;
//	cin >> b2;
	
	int length = sqrt((a2 - a1) * (a2 - a1) + (b2 - b1) * (b2 - b1));
	cout << "����� �������: " << length;
};
