#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL,"Rus");
	
	int gender, age;
	
	cout << "1 - Ìóæñêîé" << endl << "2 - Æåíñêèé" << endl << "Âàø ïîë: ";
	cin >> gender;
	
	if (gender != 1) {
		cout << "ÓÂÛ, ÂÛ ";	
	} else {
		cout << "Ââåäèòå âàø âîçðàñò: ";
		cin >> age;
	}
	
	if (1 || 2) {
		return true;
	}
	
	gender == 1 && age > 17 ? cout << "ÃÎÄÅÍ" : cout << "ÍÅ ÃÎÄÅÍ(ÍÀ)";
	
	return 0;
}
