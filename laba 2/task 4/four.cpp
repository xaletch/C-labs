#include<iostream>

using namespace std;

int main()
{
	//	РУСИФИКАТОР
	setlocale(LC_ALL, "Russian");
	
	int a, b, c;
	
	cout << "Введите три любых числа: ";
	cin >> a >> b >> c;
	
	//	ПОЛУЧАЕМ СУММУ ЧИСЕЛ
	int sum = a + b + c;
	
	//	ПРОИЗВЕДЕНИЕ
	int proizvedenie = a * b * c;
	
	// СРЕДНЕЕ АРИФМЕТИЧЕСКОЕ
	int arithmetic = (sum) / 3; // SUM - ПЕРЕМЕННАЯ КОТОРАЯ СЧИТАЕ a + b + c
	
	cout << "Сумма: " << sum << "\n";
	cout << "Произведение: " << proizvedenie << "\n";
	cout << "Cреднее арифметическое: " << arithmetic;
};
