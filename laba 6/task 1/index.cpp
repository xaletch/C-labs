#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	
	int number, min, max;
	
	cout << "Введите пять целых чисел: ";
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
	
	cout << "Максимальное число: " << max << endl;
	cout << "Минимальное число: " << min << endl;
}
