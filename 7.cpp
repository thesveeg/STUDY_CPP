#include <iostream>
#include <math.h>


using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n, k, answer_1, answer = 0, i = -1;
	cout << "������� N � K: " << endl;
	cin >> n >> k;
	while (answer<n)
	{
		answer += k;
		i++;
	}
	answer -= k;
	cout << "�������: " << i << ", �������: " << n - answer << endl;
	return 0;
}