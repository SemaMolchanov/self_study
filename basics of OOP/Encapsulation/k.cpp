#include <iostream>

using namespace std;

/*конструктор копирования нужен для того чтобы объекты класса можно было копировать(значение одного в другой, как с переменными)*/
/*или передавать объект класса параметром в функцию по значению*/
/*конструктор копирования всегда существует по умолчанию*/
/*но часто его нужно описывать самостоятельно, дабы организовать логику его работы так, как это нам нужно*/
/*напримаер при работе с динамическим массивом*/

class valueKeeper{
private:
    int* data;
    int SIZE;
public:
    valueKeeper (int size){
        this->SIZE = size;
        this->data = new int [SIZE];
        for (int i = 0; i < size; i++){
            data[i] = i;
        }
        cout << this << " constructor has been called" << endl; 
    }
    valueKeeper (const valueKeeper &other){
        this->SIZE = other.SIZE;
        this->data = new int [SIZE];
        for (int i = 0; i < other.SIZE; i++){
            this->data[i] = other.data[i];
        }
        cout << this << " copy constructor has been called" << endl;
    }
    valueKeeper & operator = (const valueKeeper &other){
        cout << "= operator has been called";
        this->SIZE = other.SIZE;
        if (this->data != nullptr){
            delete [] this->data;
        }
        this->data = new int [SIZE];
        for (int i = 0; i < other.SIZE; i++){
            this->data[i] = other.data[i];
        }
        return *this;
    }
    ~valueKeeper (){
        delete [] data;
        cout << this << " destructor has been called" << endl;
    }
};



int main(){
    valueKeeper a(10);
    valueKeeper b(5);
    a = b;
    return 0;
}