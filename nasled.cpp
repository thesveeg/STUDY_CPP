#include <iostream>
#include <cmath>
using namespace std;

class Number {
	public:
	float chislo;
	Number(){chislo = 1.5;}
	void sum(float a);
	void del(float b);
};
class Real : public Number{
	public:
	Real operator + (const Real & other){
		Real temp;
		temp.chislo = this->chislo + temp.chislo;
		return temp;
	}
	void stepen(float c);
	void logarifm();
};
	std::ostream& operator << (std::ostream& ot, const Real& r)
	{
		return ot << "Chislo: " << r.chislo << endl;
	}
	std::istream& operator >> (std::istream& in, Real& r)
	{
	cout << "Chislo: " << endl; 
    in >> r.chislo;
    return in;
	}
void Number::sum(float a){
	chislo += a;
}
void Number::del(float b){
	chislo /= b;
}
void Real::stepen(float c){
	chislo = pow(chislo, c);
}
void Real::logarifm(){
	chislo = log(chislo);
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int exit;
	Real n;
	cin >> n;
	cout << n << endl;
	n.sum(5);
	cout << n << endl;
	n.del(10);
	cout << n << endl;
	n.stepen(2);
	cout << n << endl;
	n.logarifm();
	
	cin >> exit;
	return 0;
}
