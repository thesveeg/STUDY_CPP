#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int number;
	double value;
	cout << "Введите сначала номер, а затем значение: " << endl;
	cin >> number >> value;
	switch (number)
	{
		case 1:
			cout << (value * sqrt(3)) / 6 << " " << (value * sqrt(3)) / 3 << " " << (pow(value, 2) * sqrt(3)) / 4 << endl;
		break;
		case 2:
			double a;
			a = (6 * value) / sqrt(3);
			cout << a << " " << 2 * value << " " << (pow(a, 2) * sqrt(3)) / 4 << endl;
		break;
		case 3:
			double a_3;
			a_3 = (3 * value) / sqrt(3);
			cout << a_3 << " " << value / 2 << " " << (pow(a_3, 2) * sqrt(3)) / 4 << endl;
		break;
		case 4:
			double a_4;
			a_4 = sqrt((4 * value) / sqrt(3));
			cout << a_4 << " " << (a_4 * sqrt(3)) / 6 << " " << (a_4 * sqrt(3)) / 3 << endl;
		break;
	}
	return 0;
}