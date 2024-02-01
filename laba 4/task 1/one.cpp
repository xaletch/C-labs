#include <iostream>

using namespace std;

int main()
{
    int number;
    
    cout << "??????? ????? ?????: ";
    cin >> number;
    
    int square = number * number;
    int fourthPower = square * square;
    int eigthPower = fourthPower * fourthPower;
    int tenthPower = eigthPower * square;
    
    cout << number << " ? 10 ???????: " << tenthPower;
}
