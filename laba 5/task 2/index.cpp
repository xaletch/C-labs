#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	

	int number;
	
	cout << "������� ������������ �����: ";
	cin >> number;
	
	int rounded = round(number);
	cout << "����������� �����: " << rounded;
}
