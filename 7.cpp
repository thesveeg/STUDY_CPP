#include <iostream>
#include <math.h>


using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n, k, answer_1, answer = 0, i = -1;
	cout << "Введите N и K: " << endl;
	cin >> n >> k;
	while (answer<n)
	{
		answer += k;
		i++;
	}
	answer -= k;
	cout << "Частное: " << i << ", Остаток: " << n - answer << endl;
	return 0;
}