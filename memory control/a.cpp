#include <iostream>

using namespace std;

int main(){
    int a = 5;
    int *pa = &a;
    cout << a << "\tis value of the variable a" << endl;
    cout << pa << "\tis address of the variable a"<< endl;
    cout << *pa << "\tis value of the variable a" << endl;
    cout << &a << "\tis address of the variable a";
    return 0;
}