#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	
    // int a = 26, b = 6;
    int a = 22, b = 4;
    int c, d;
    
    
	// �   
    c = (a % b) + b;
    cout << "� - " << c << endl << endl;
    
	// �   
    c = (a / b) + a;
    cout << "� - " << c << endl << endl;
    
	// �   
    d = a / b;
    cout << "� - " << d << endl;
      
    c = a / d;
    cout << "�����: " << c << endl << endl;
    
	// �
    d = (a / b) + b;
    cout << "� - " << c << endl;
    
    c = (a % d) + 4;
    cout << "�����: " << c << endl << endl;

	// �
    d = (a % b) + 4;
    cout << "� - " << d << endl;
    
    c = (a % d) + 1;
    cout << "�����: " << c << endl << endl;
    
	// �   
    d = a / b;
    cout << "� - " << d << endl;
    
    c = (a % (d + 1));
    cout << "�����: " << c << endl << endl;
    
	// �
    d  = a % b;
    cout << "� - " << d << endl;
    
    c = a / (d + 1);
    cout << "�����: " << c << endl << endl;
}

