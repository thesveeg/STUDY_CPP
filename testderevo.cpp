#include <iostream>

using namespace std;

int tabs = 0;
int kol_vo = 0;


class Branch {
	public:
	int Data;
	Branch* LeftBranch;
	Branch* RightBranch;
	Branch* Root;
	Branch(Branch*& aBranch) {
		Root = aBranch;
	}
	Branch()
	{
	}

	//ЗАПОЛНЕНИЕ
	void Add(int aData){
	if (!Root){
	Root = new Branch;
	Root->Data = aData;
	Root->LeftBranch = 0;
	Root->RightBranch = 0;
	return;
	}
	else
	if (Root->Data > aData){
	Add(aData, Root->LeftBranch);
	}
	else{
	Add(aData, Root->RightBranch);
	};
	}

	void Add(int aData, Branch*& aBranch){
	if (!aBranch){
	aBranch = new Branch;
	aBranch->Data = aData;
	aBranch->LeftBranch = 0;
	aBranch->RightBranch = 0;
	return;
	}
	else
	if (aBranch->Data > aData){
	Add(aData, aBranch->LeftBranch);
	}
	else{
	Add(aData, aBranch->RightBranch);
	};
	}

	//ВЫВОД
	void print()
	{
	if (!Root) return;
	tabs += 5;
	print(Root->LeftBranch);
	for (int i = 0; i < tabs; i++) cout << " ";
	cout << Root->Data << endl;
	print(Root->RightBranch);
	tabs-= 5;
	return;
	}
	void print(Branch* aBranch)
	{
	if (!aBranch) return;
	tabs += 5;
	print(aBranch->LeftBranch);
	for (int i = 0; i < tabs; i++) cout << " ";
	cout << aBranch->Data << endl;
	print(aBranch->RightBranch);
	tabs-= 5;
	return;
	}



	int summ_k(Branch*& aBranch, int k) {
	int sum = 0;
	if ((aBranch != NULL) && (k > 0)) {
	sum += summ_k(aBranch->LeftBranch, k - 1);
	sum += aBranch->Data;
	sum += summ_k(aBranch->RightBranch, k - 1);
	}
	return sum;
	}

	//ДОБАВЛЕНИЕ

	void add_elem(int aData)
	{
	if (!Root)
	{
	Root = new Branch;
	Root->Data = aData;
	Root->LeftBranch = 0;
	Root->RightBranch = 0;
	return;
	}
	else
	{
	if (aData < Root->Data) {
	add_elem(aData, Root->LeftBranch);
	}
	else if (aData > Root->Data) {
	add_elem(aData, Root->RightBranch);
	}
	}
	}

	void add_elem(int aData, Branch*& aBranch)
	{
	if (!aBranch)
	{
	aBranch = new Branch;
	aBranch->Data = aData;
	aBranch->LeftBranch = 0;
	aBranch->RightBranch = 0;
	return;
	}
	else
	{
	if (aData < aBranch->Data) {
	add_elem(aData, aBranch->LeftBranch);
	}
	else if (aData > aBranch->Data) {
	add_elem(aData, aBranch->RightBranch);
	}
	}
	}

	//УДАЛЕНИЕ

	Branch* del_elem(Branch*& aBranch, int aData) {
	if (aBranch == NULL)
	return aBranch;
	if (aData == aBranch->Data) {
	Branch* tmp;
	if (aBranch->RightBranch == NULL)
	tmp = aBranch->LeftBranch;
	else {
	Branch* ptr = aBranch->RightBranch;
	if (ptr->LeftBranch == NULL) {
	ptr->LeftBranch = aBranch->LeftBranch;
	tmp = ptr;
	}
	else {
	Branch* pmin = ptr->LeftBranch;
	while (pmin->LeftBranch != NULL) {
	ptr = pmin;
	pmin = ptr->LeftBranch;
	}
	ptr->LeftBranch = pmin->RightBranch;
	pmin->LeftBranch = aBranch->LeftBranch;
	pmin->RightBranch = aBranch->RightBranch;
	tmp = pmin;
	}
	}
	delete aBranch;
	return tmp;
	}
	else if (aData < aBranch->Data)
	aBranch->LeftBranch = del_elem(aBranch->LeftBranch, aData);
	else
	aBranch->RightBranch = del_elem(aBranch->RightBranch, aData);
	return aBranch;
	}

	Branch* del_elem(int aData) {
	if (Root == NULL)
	return Root;
	if (aData == Root->Data) {
	Branch* tmp;
	if (Root->RightBranch == NULL)
	tmp = Root->LeftBranch;
	else {
	Branch* ptr = Root->RightBranch;
	if (ptr->LeftBranch == NULL) {
	ptr->LeftBranch = Root->LeftBranch;
	tmp = ptr;
	}
	else {
	Branch* pmin = ptr->LeftBranch;
	while (pmin->LeftBranch != NULL) {
	ptr = pmin;
	pmin = ptr->LeftBranch;
	}
	ptr->LeftBranch = pmin->RightBranch;
	pmin->LeftBranch = Root->LeftBranch;
	pmin->RightBranch = Root->RightBranch;
	tmp = pmin;
	}
	}
	delete Root;
	return tmp;
	}
	else if (aData < Root->Data)
	Root->LeftBranch = del_elem(Root->LeftBranch, aData);
	else
	Root->RightBranch = del_elem(Root->RightBranch, aData);
	return Root;
	}
};

int main()
{
setlocale(LC_ALL, "rus");
Branch* Root = 0;
Branch D(Root);
int vel;
int element;
int k;
cout << "Введите кол-во элементов для будущего дерева: ";
cin >> vel;
cout << endl;
for (int i = 0; i < vel; i++)
{
D.Add(rand() % 100);
}
cout << "Вывод бинарного дерева: " << endl;
D.print();
cout << endl;
cout << "Добавим новый элемент в бинарное дерево:" << endl;
cout << "Введите новый элемент: ";
cin >> element;
D.add_elem(element);
cout << "Вывод бинарного дерева: " << endl;
D.print();
cout << endl;
cout << "Удалим элемент из бинарного дерева:" << endl;
cout << "Введите элемент: ";
cin >> element;
D.del_elem(element);
cout << "Вывод бинарного дерева: " << endl;
D.print();
cout << endl;
return 0;
}