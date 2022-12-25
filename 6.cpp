#include <iostream>
#include <math.h>


using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n, k;
	double sum;
	cout << "¬ведите N и K: " << endl;
	cin >> n >> k;
	for(int i=0; i <= n; i++)
	{
		sum+= pow(i, k);
	}
	cout << "—умма равна: " << sum;
	return 0;
}