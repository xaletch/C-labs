#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	
	int number, min, max;
	
	cout << "������� ���� ����� �����: ";
	cin >> number;
	
	max = number;
	min = number;
	
	
	for (int i = 1; i < 5; i++) {
		cin >> number;
		if (number > max) {
			max = number;
		} else {
			min = number;
		}
	}
	
	cout << "������������ �����: " << max << endl;
	cout << "����������� �����: " << min << endl;
}
