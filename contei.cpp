#include <iostream>

#include <vector>

#include <algorithm>
using namespace std;

int main (){
int n, l;
int elem;
cin >> elem >> n ;
vector <int> a;
for (int i = 0; i < n; i++) {
int x;
cin >> x;
a.push_back(x);
if (x % (i+1) == 0) {
a.push_back(elem);
}
}
for (int i = 0; i < a.size(); i++) {
cout << a[i] << " ";
}
return 0;
}