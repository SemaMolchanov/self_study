#include <iostream>

using namespace std;

/*модификаторы доступа внутри класса
1. public - поля и методы доступны всем и везде
2. private - поля и методы доступны только внутри класса
3. protected - поля и методы доступны внутри класса,
а также внутри классов-наследников, но нигде больше
*/

/*модификаторы наследования переопределяют поведение модификаторов доступа, 
описанных внутри базового класса, для класса-наследника.
Для базового класса из поведение при этом не изменяется
1. public - никак не переопределяет исходные модификаторы доступа
2. private - переопределяют все модификаторы якобы они private
3. protected - переопределяет public модификаторы, якобы они protected
*/

/*наиболее часто используют public-наследование, а остальные
редко, в специфичных случаях*/

class A{
private:
    string msg1 = "first message";
public:
    string msg2 = "second message";
protected:
    string msg3 = "third message";
};

class B : public A{
public:
    void print_msg(){
        cout << msg2 << endl;
        cout << msg3 << endl;
    }
};

int main(){
    B b;
    b.print_msg();
    return 0;
}