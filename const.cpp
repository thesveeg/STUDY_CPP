#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Account {
	private:
	string fio;
	string id;
	float percent;
	float summ;

	public:
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
void Account::init(string fi, string i, float p, float s)
{
	fio = fi;
	id = i;
	percent = p;
	summ = s;
}
void Account::display()
{
	cout << "fio: " << fio << "\nid: " << id << "\npercent: " << percent << "\nsumm: " << summ << endl;
}
void Account::read()
{
	cout << "fio: " << endl;
	cin >> fio;
	cout << "id: " << endl;
	cin >> id;
	cout << "percent: " << endl;
	cin >> percent;
	cout << "summ: " << endl;
	cin >> summ;
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

	First.init("Babaev Valeriy", "01", 10, 15000);
	First.display();
	First.change_owner("Shabaev Valeriy");
	First.display();
	First.withdraw(2000);
	First.display();
	First.deposit(7000);
	First.display();
	First.percents();
	First.display();
	First.to_dollars();
	First.to_euro();

	Account f1 = First;
	Account f2 = Account("A A A", "04", 18, 16000);
	Account f3 = Account();
	f2.display();
	cout << "\n" << endl;
	f3.display();
	cout << "\n" << endl;
	Account arr_acs[2];
	arr_acs[0] = First;
	arr_acs[1] = f1;
	cin >> exit;
	return 0;
}
