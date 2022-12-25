#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	cout << "¬ведите три стороны треугольника: " << endl;
	cin >> a >> b >> c;
	cout << ((c*c == a*a + b*b) || (a*a == c*c + b*b) || (b*b == c*c + a*a)) << endl;
	return 0;
}