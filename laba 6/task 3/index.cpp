#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	
	int month;
	
	cout << "Введите номер месяца: ";
	cin >> month;
	
	if (month < 1 || month > 12) {
		cout << "Неверный месяц! ";
	} else {
		if (month >= 3 && month <= 5) {
			cout << "Весна" << endl;
		} else if (month >= 6 && month <= 8) {
			cout << "Лето" << endl;
		} else if (month >= 3 && month <= 5) {
			cout << "Осень" << endl;
		} else {
			cout << "Зима" << endl;
		}
	}
}
