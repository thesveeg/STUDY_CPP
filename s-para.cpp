#include <iostream>
#include <cmath>
using namespace std;

struct Para {
	float first;
	float second;

	void read();
	void display();
	void inits(float f, float s);
	float distance();
};
void Para::inits(float f, float s)
{
	first = f;
	second = s;
}
void Para::display()
{
	cout << "first: " << first << "\nsecond: " << second;
}
void Para::read()
{
	cout << "first: " << endl;
	cin >> first;
	cout << "second: " << endl;
	cin >> second;
}
float Para::distance()
{
	float a = first;
	float b = second;
	float answer;
	answer = sqrt(pow(a, 2) + pow(b, 2));
	return answer;
}
Para make_para(float a, float b) {
 	Para c;
 	c.first = a;
 	c.second = b;

 	return c;
}


int main()
{
	setlocale(LC_ALL, "Russian");
	Para x,y;
	//ввод
	x.read();
	x.display();
	float o = x.distance();
	cout << "\nDistance: " << o << endl;
	//инициализаци€
	y.inits(12, 5);
	y.display();
	float o2 = y.distance();
	cout << "\nDistance: " << o2 << endl;
	//метод дл€ инициализации
	Para z = make_para(6, 8);
	z.display();
	float q = z.distance();
	cout << "\nDistance: " << q << endl;

	cin >> o;
	return 0;
}
