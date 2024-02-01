#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	//	–”—»‘» ¿“Œ–
	setlocale(LC_ALL, "Russian");
	
	float a1, a2;
	float b1, b2;
	
	cout << "¬¬≈ƒ»“≈  ŒŒ–ƒ»Õ¿“€ “Œ◊ » A: ";
	cin >> a1 >> a2;
	
	cout << "¬¬≈ƒ»“≈  ŒŒ–ƒ»Õ¿“€ “Œ◊ » B: ";
	cin >> b1 >> b2;
//	cin >> b2;
	
	int length = sqrt((a2 - a1) * (a2 - a1) + (b2 - b1) * (b2 - b1));
	cout << "ƒÀ»Õ¿ Œ“–≈« ¿: " << length;
};
