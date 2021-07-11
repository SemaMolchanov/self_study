#include <iostream>

using namespace std;

/*цепочка наследования A->B->C*/

/*данная программа показывает в каком порядке вызываются
конструкторы при создании объекта класса, последнего в цепочке
наследовния(самого последнего "потомка")*/

/*объяснение, почему так происходит, по след. ссылке*/

/*https://youtu.be/sNInKQgUZMA*/

class A{
public:
    A(){
        cout << "class A constructor has been called" << endl;
    }
};

class B : public A{
public:
    B(){
        cout << "class B constructor has been called" << endl;
    }
};

class C : public B{
public:
    C(){
        cout << "class C constructor has been called" << endl;
    }
};

int main(){
    C value;
    return 0;
}