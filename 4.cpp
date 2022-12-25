#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int x, y;
	cout << "¬ведите переменную X: " << endl;
	cin >> x;
	cout << "¬ведите переменную Y: " << endl;
	cin >> y;
	if (y > x)
	{
		int temp = y;
		y = x;
		x = temp;
	}
	cout << "X=" << x << " Y=" << y << endl;
	return 0;
} 