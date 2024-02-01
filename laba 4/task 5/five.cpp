#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL,"Russian");
    int num;
    cout << "Введите трехзначное число: "; 
    cin >> num; 

    int a = num / 100;
    int b = (num % 100) / 10;
    int c = num % 10;

    return 0;
}

