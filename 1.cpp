#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float tcel, tfar;
	cout << "Введите температуру в градусах цельсия: " << endl;
	cin >> tcel;
	cout << "Температура в градусах Фаренгейта: " << tcel * 1.8 + 32 << endl;
	return 0;
}