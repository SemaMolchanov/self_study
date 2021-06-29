#include <iostream>

using namespace std;

/*цепочка наследования A->B->C*/

/*данная программа показывает в каком порядке вызываются
деструкторы при разрушении объекта класса, последнего в цепочке
наследовния(самого последнего "потомка")*/

/*объяснение, почему так происходит, по след. ссылке*/

/*https://youtu.be/S_owqPD5dVk*/

class A{
public:
    A(){
        cout << "class A constructor has been called" << endl;
    }
    ~A(){
        cout << "class A destructor has been called" << endl;
    }
};

class B : public A{
public:
    B(){
        cout << "class B constructor has been called" << endl;
    }
    ~B(){
        cout << "class B destructor has been called" << endl;
    }
};

class C : public B{
public:
    C(){
        cout << "class C constructor has been called" << endl;
    }
    ~C(){
        cout << "class C destructor has been called" << endl;
    }
};

int main(){
    C value;
    cout << endl << endl;
    return 0;
}