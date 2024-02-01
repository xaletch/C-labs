#include <iostream>

using namespace std;

int main()
{
    float a = 2, b = 3;
    float c;
    
    c = a + (1.0 / 3);
    cout << "a + 1 / 3 = " << c << endl;
    
    c = a + (4.0 / (2 * 3)) + 6;
    cout << "a + 4 / 2 * 3 = " << c << endl;
    
    c = (a + 4) / (2 * 3);
    cout << "(a + 4) / 2 * 3 = " << c << endl;
    
    c = (a + 4) / (b + 3) * a;
    cout << "(a + 4) / (b + 3) * a = " << c << endl;
}

