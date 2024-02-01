#include <iostream>
#include <ctime>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	
	int a, b;
	cout << "Введите два целых числа a < b: ";
	cin >> a >> b;
	
	//	ГЕНЕРАТОР СЛУЧАЙНЫХ ЧИСЕЛ
	for (int i = 0; i < 5; ++i) {
		int random = rand() % (b - a + 1) + a;
		cout << random << "  ";
	}
}
