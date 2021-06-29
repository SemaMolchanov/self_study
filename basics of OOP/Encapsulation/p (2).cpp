#include <iostream>

using namespace std;

/*конструкторы, деструктор и методы класса можно описывать вне класса с помощью спец. синтаксиса*/
/*прототип метода или конструктора или деструктора должен быть внутри класса в public поле*/
/*описание вынесено за пределы класса*/
/*так делается при создании больших классов*/

class test{
private:
    /* data */
public:
    test(/* args */);
    ~test();
    void print_message();
};

test::test(/* args */)
{
}

test::~test()
{
}

void test::print_message(){
    cout << "hello" << endl;
}

int main(){
    test a;
    a.print_message();
    return 0;
}