#include <iostream>
#include <ctime>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	
	srand(time(0));
	
	int result = rand() % 11 + 2;
	cout << "Результат бросания двух кубиков: " << result;	
}
