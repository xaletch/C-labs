#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	
	
	int x1, x2;
	
	cout << "������� ���������� ������ �����: ";
	cin >> x1;

	cout << "������� ���������� ������ �����: ";	
	cin >> x2;
	
	
	int distance = abs(x2- x1);
	
	cout << "���������� ����� �������: " << distance;
}
