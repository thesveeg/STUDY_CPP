#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float tcel, tfar;
	cout << "������� ����������� � �������� �������: " << endl;
	cin >> tcel;
	cout << "����������� � �������� ����������: " << tcel * 1.8 + 32 << endl;
	return 0;
}