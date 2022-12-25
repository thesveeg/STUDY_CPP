#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int size;
	float temp, answer[size];
	cout << "¬ведите размер массива: " << endl;
	cin >> size;
	int numbers[size];
	for (int i = 0; i < size; i++)
	{
		cout << "¬ведите элемент массива под номером: " << i + 1 << endl;
		cin >> temp;
		numbers[i] = temp;
	}
	for (int i = 0; i < size; i++)
	{
		temp = 0;
		for (int k = 0; k < (i + 1); k++)
		{
			temp += numbers[k];
		}
		temp /= (i + 1);
		answer[i] = temp;
		cout << "Ёлемент массива B с номером: " << i + 1 << endl;
		cout << answer[i] << endl;
	}
	return 0;
}