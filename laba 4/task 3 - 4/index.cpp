#include <iostream>

using namespace std;

int main()
{
    // int a = 26.0, b = 6,0;
    int a = -22.0, b = 4.0;
    int c;
    
    int bTwo;
    
    c = (a % b) + b;
    cout << "a % b + b = " << c << endl;
    
    c = (a / b) + a;
    cout << "c = a / b + a = " << c << endl;
    
    bTwo = a / b;
    cout << "b = a / b = " << bTwo << endl;
    
    c = a / b;
    cout << "c = a / b = " << c << endl;
    
    bTwo = (a / b) + b;
    cout << "b = a / b + b = " << bTwo << endl;
    
    c = (a % b) + 4;
    cout << "c = a % b + 4 = " << c << endl;
    
    bTwo + (a % b) + 4;
    cout << "b = a % b + 4 = " << bTwo << endl;
    
    c = (a % b) + 1;
    cout << "c = a % b + 1 = " << c << endl;
    
    bTwo = a / b;
    cout << "b = a / b = " << bTwo << endl;
    
    c = (a % (b + 1));
    cout << "c = a % (b + 1) = " << c << endl;
    
    bTwo  = a % b;
    cout << "b = a % b = " << bTwo << endl;
    
    c = a / (b + 1);
    cout << "c = a / (b + 1) = " << c << endl;
    
}

