#include <iostream>

using namespace std;

void plus_one(int *pa, int *pb, int *pc){
    ++(*pa);
    ++(*pb);
    ++(*pc);
}

int main(){
    int a = 5, b = 6, c = 7;
    int *pa = &a, *pb = &b, *pc = &c;
    cout << "a = " << a << " b = " << b << " c = " << c << endl;
    plus_one(pa, pb, pc);
    cout << "a = " << a << " b = " << b << " c = " << c;
    return 0;
}