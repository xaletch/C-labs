#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	
    // int a = 26, b = 6;
    int a = 22, b = 4;
    int c, d;
    
    
	// А   
    c = (a % b) + b;
    cout << "А - " << c << endl << endl;
    
	// Б   
    c = (a / b) + a;
    cout << "Б - " << c << endl << endl;
    
	// В   
    d = a / b;
    cout << "В - " << d << endl;
      
    c = a / d;
    cout << "Ответ: " << c << endl << endl;
    
	// Г
    d = (a / b) + b;
    cout << "Г - " << c << endl;
    
    c = (a % d) + 4;
    cout << "Ответ: " << c << endl << endl;

	// Д
    d = (a % b) + 4;
    cout << "Д - " << d << endl;
    
    c = (a % d) + 1;
    cout << "Ответ: " << c << endl << endl;
    
	// Е   
    d = a / b;
    cout << "Е - " << d << endl;
    
    c = (a % (d + 1));
    cout << "Ответ: " << c << endl << endl;
    
	// Ж
    d  = a % b;
    cout << "Ж - " << d << endl;
    
    c = a / (d + 1);
    cout << "Ответ: " << c << endl << endl;
}

