#include <iostream>
#include <stdexcept>
#include <string>
 
using namespace std;

class MyExcept1 {};
 
class MyExcept2 {
    string msg;
public:
    MyExcept2(const string &s) : msg(s) {}
    const char *message() const { return msg.c_str(); }
};
 
class MyExcept3 : public invalid_argument {
    double num;
public:
    MyExcept3(const string msg, double n) : invalid_argument(msg), num(n) {}
    double arg() const { return num; }
};
 
double root1(double a, double b) {
    return -b / a;
}
 
double root2(double a, double b) throw() {
    return -b / a;
}
 
double root3(double a, double b){
    if (a == 0.0)
        throw invalid_argument("Div by 0");
    return -b / a;
}
 
double root4_1(double a, double b) {
    if (a == 0.0)
        throw MyExcept1();
    return -b / a;
}
 
double root4_2(double a, double b) {
    if (a == 0.0)
        throw MyExcept2("Div by 0");
    return -b / a;
}
 
double root4_3(double a, double b) {
    if (a == 0.0)
        throw MyExcept3("Bad arg", a);
    return -b / a;
}
 
void launcher(double (*func)(double, double)) {
    double a, b;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    cout << "Root: " << func(a, b) << endl;
}
 
int main() {
    setlocale(LC_ALL, "rus");
    try {
        launcher(root1);
    }
    catch (...) {
        cout << "ERR in root1" << endl;
    }
 
    try {
        launcher(root2);
    }
    catch (...) {
        cout << "ERR in root2" << endl;
    }
 
    try {
        launcher(root3);
    }
    catch (invalid_argument &e) {
        cout << e.what() << endl;
    }
 
    try {
        launcher(root4_1);
    }
    catch (MyExcept1) {
        cout << "ERR in root4-1" << endl;
    }
 
    try {
        launcher(root4_2);
    }
    catch (MyExcept2 &e) {
        cout << e.message() << endl;
    }
 
    try {
        launcher(root4_3);
    }
    catch (MyExcept3 &e) {
        cout << e.what() << " " << e.arg() << endl;
    }
}