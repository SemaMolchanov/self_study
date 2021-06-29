#include <iostream>

using namespace std;

/*конструктор копирования нужен для того чтобы объекты класса можно было копировать(значение одного в другой, как с переменными)*/
/*или передавать объект класса параметром в функцию по значению*/
/*конструктор копирования всегда существует по умолчанию*/
/*но часто его нужно описывать самостоятельно, дабы организовать логику его работы так, как это нам нужно*/
/*напримаер при работе с динамическим массивом*/

class valueKeeper{
private:
    int data;
public:
    valueKeeper (int data){
        this->data = data;
        cout << this << " constructor has been called" << endl; 
    }
    ~valueKeeper (){
        cout << this << " destructor has been called" << endl;
    }
};

void print(valueKeeper value){
    cout << "value has been recieved" << endl;
}

int main(){
    valueKeeper a(10);
    print(a);
    return 0;
}