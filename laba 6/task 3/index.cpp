#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	
	int month;
	
	cout << "������� ����� ������: ";
	cin >> month;
	
	if (month < 1 || month > 12) {
		cout << "�������� �����! ";
	} else {
		if (month >= 3 && month <= 5) {
			cout << "�����" << endl;
		} else if (month >= 6 && month <= 8) {
			cout << "����" << endl;
		} else if (month >= 3 && month <= 5) {
			cout << "�����" << endl;
		} else {
			cout << "����" << endl;
		}
	}
}
