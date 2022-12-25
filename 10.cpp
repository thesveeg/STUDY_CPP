#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	string test;
	cout << "Введите строку: " << endl;
	cin >> test;
	string str1 = "abcdefghijklmnopqrstuvwxyz";
	int indx = -1;
	int indx2;
	for (int i = 0; i < test.length(); ++i)
	{
		if (str1.find(test[i]) != -1)
		{
			if (indx != -1)
			{
				indx2 = test[i];
				if (indx2 < indx)
				{
					cout << "Индекс элемента: " << i << endl;
					return 0;
				}
				indx = indx2;
			}
			indx = test[i];
		}
	}
	cout << '0' << endl;
	return 0;
}