#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL,"Rus");
	
	int gender, age;
	
	cout << "1 - �������" << endl << "2 - �������" << endl << "��� ���: ";
	cin >> gender;
	
	if (gender != 1) {
		cout << "���, �� ";	
	} else {
		cout << "������� ��� �������: ";
		cin >> age;
	}
	
	if (1 || 2) {
		return true;
	}
	
	gender == 1 && age > 17 ? cout << "�����" : cout << "�� �����(��)";
	
	return 0;
}
