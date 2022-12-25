#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Account {
	public:
	string fio;
	string id;
	float percent;
	float summ;

	public:	
	Account operator + (const Account & other){
		Account tmp;
		tmp.fio = this->fio + other.fio;
		tmp.id = this->id + other.id;
		tmp.percent = this->percent + other.percent;
		tmp.summ = this->summ + other.summ;
		return tmp;
	}
	Account(){fio = "B A C"; id = "00"; percent = 15; summ=50000;}
	Account(string Fio, string ID, float Percent, float Summ){fio = Fio; id = ID; percent = Percent; summ = Summ;}
	void init(string fi, string i, float p, float s);
	void read();
	void display();
	void change_owner(string owner);
	void withdraw(float temp);
	void deposit(float temp2);
	void percents();
	void to_dollars();
	void to_euro();

};
std::ostream& operator << (std::ostream& ot, const Account& a)
	{
		return ot << a.fio << " " << a.id << " " << a.percent << " " << a.summ << " " << endl;
	}
std::istream& operator >> (std::istream& in, Account& a)
	{
	cout << "Enter Account: " << endl; 
    in >> a.fio >> a.id >> a.percent >> a.summ;
    return in;
	}
void Account::init(string fi, string i, float p, float s)
{
	fio = fi;
	id = i;
	percent = p;
	summ = s;
}
void Account::change_owner(string owner)
{
	fio = owner;
	cout << "\n" << endl;
}
void Account::withdraw(float temp)
{
	summ -= temp;
	cout << "\n" << endl;
}
void Account::deposit(float temp2)
{
	summ += temp2;
	cout << "\n" << endl;
}
void Account::percents()
{
	float per;
	per = (percent / 100) + 1;
	summ = summ * per;
	cout << "\n" << endl;
}
void Account::to_dollars()
{
	float sumdol;
	sumdol = summ / 60;
	cout << "\n" << sumdol << " Dollars" << endl;
	cout << "\n" << endl;
}
void Account::to_euro()
{
	float sumeuro;
	sumeuro = summ / 70;
	cout << sumeuro << " Euro" << endl;
	cout << "\n" << endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int exit;
	Account First;

	//First.init("Babaev Valeriy", "01", 10, 15000);
	cin >> First;
	cout << First;
	First.change_owner("Shabaev Valeriy");
	cout << First;
	First.withdraw(2000);
	cout << First;
	First.deposit(7000);
	cout << First;
	First.percents();
	cout << First;
	First.to_dollars();
	First.to_euro();

	Account f1 = First;
	Account f2 = Account("A A A", "04", 18, 16000);
	Account f3 = Account();
	cout << f2;
	cout << "\n" << endl;
	cout << f3;
	cout << "\n" << endl;
	Account arr_acs[2];
	arr_acs[0] = First;
	arr_acs[1] = f1;
	cin >> exit;
	return 0;
}
