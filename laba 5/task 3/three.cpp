#include <iostream>
#include <ctime>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	
	int a, b;
	cout << "������� ��� ����� ����� a < b: ";
	cin >> a >> b;
	
	//	��������� ��������� �����
	for (int i = 0; i < 5; ++i) {
		int random = rand() % (b - a + 1) + a;
		cout << random << "  ";
	}
}
