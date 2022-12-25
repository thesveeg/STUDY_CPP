#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
	string strmain;
	getline(cin, strmain);
	string symbol, symbol2;
	bool flag;
	int i = 1;
	while (i <= strmain.length())
	{
		symbol = strmain[i];
		symbol2 = strmain[i-1];
		if (symbol == " " and symbol2 == " ")
		{
			strmain.erase(i, 1);
			i--;
		}
		i++;
	}
	cout << strmain << endl;
	return 0;
}