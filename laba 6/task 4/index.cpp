#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	
	int month;
	
	cout << "������� ����� ������: ";
	cin >> month;
	
	switch(month) {
		case 12:
		case 1:
		case 2:
			cout << "����" << endl;
			break;
		case 3:
		case 4:
		case 5:
			cout << "�����" << endl;
			break;
		case 6:
		case 7:
		case 8:
			cout << "����" << endl;
			break;
		case 9:
		case 10:
		case 11:
			cout << "����" << endl;
			break;
			
			return 0;
		default: 
            cout << "������: �������� ����� ������!" << endl;
            break;
	}
	
	return 0;
}

