#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	
	
	int x1, x2;
	
	cout << "Введите координату первой точки: ";
	cin >> x1;

	cout << "Введите координату первой точки: ";	
	cin >> x2;
	
	
	int distance = abs(x2- x1);
	
	cout << "Расстояние между точками: " << distance;
}
