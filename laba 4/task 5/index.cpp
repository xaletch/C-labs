#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    int number;
    
    cout << "Введите трехзначное число: ";
    cin >> number;
    
    if (number < 3) {
        cout << "Число должно быть трехзначным!";
    };
}
