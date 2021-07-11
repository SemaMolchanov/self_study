#include <iostream>

using namespace std;

int main(){
    int a = 10;
    int *pa = &a;
    cout << "pa points to the address " << pa << endl;
    int *pb = ++pa;
    cout << "pb points to the address " << pb;
    return 0;
}