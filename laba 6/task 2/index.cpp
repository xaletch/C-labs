#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	
	int num;
	
	cout << "������� �����: ";
	cin >> num;
	
	if (num >= 100 && num <= 999) {
		cout << "����� �������� �����������!";
	} else {
		cout << "����� �� �������� �����������!";
	};
}
