#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int m;
	cout << "¬ведите пор€док матрицы: " << endl;
	cin >> m;
	int a[m][m];
	int k, i, j, q = m - 1;
	float temp, temp2;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << "¬ведите элемент матрицы A" << i + 1 << j + 1 << ":" << endl;
			cin >> temp;
			a[i][j] = temp;
		}
	}
	cout << "ќтвет: " << endl;
	cout << a[0][0] << endl;
	for (int j = 1; j < m; ++j)
	{
		temp = 0;
		for (int k = 0; k < j + 1; ++k)
		{
			temp += a[i + k][j - k];
			temp2 = k;
		}
		cout << temp / (temp2 + 1) << endl;
	}
	for (int j = 1; j < m - 1 ; ++j, q--)
	{
		temp = 0;
		for (int k = 0; k < q; ++k)
		{
			temp += a[m - 1 - k][j + k];
			temp2 = k;
		}
		cout << temp / (temp2 + 1) << endl;
	}
	cout << a[m-1][m-1] << endl;
	return 0;
}