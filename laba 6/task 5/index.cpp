#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	
	int month, days;
	
	cout << "������� ����� ������: ";
	cin >> month;
	
	switch(month) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			days = 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			days = 30;
			break;
		case 2:
			days = 29;
			break;	
		default: 
            cout << "������: �������� ����� ������!" << endl;
            break;
            
            return 0;
	}
	
	cout << "���-�� ���� � ���� ������: " << days << " ����";
	
	return 0;
}

