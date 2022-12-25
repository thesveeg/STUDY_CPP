#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int number, num_1, num_2;
	cout << "¬ведите четырЄхзначное число: " << endl;
	cin >> number;
	num_1 =  stoi(to_string(number / 1000) + to_string(number % 10));
	num_2 =  stoi(to_string((number / 10) % 10) + to_string((number / 100) % 10));
	cout << "ќтвет: " << num_1 + num_2 << endl;
	return 0;
}