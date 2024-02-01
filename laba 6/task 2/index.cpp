#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	
	int num;
	
	cout << "Введите число: ";
	cin >> num;
	
	if (num >= 100 && num <= 999) {
		cout << "Число является трехзначным!";
	} else {
		cout << "Число не является трехзначным!";
	};
}
