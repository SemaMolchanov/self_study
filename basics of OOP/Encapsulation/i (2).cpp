#include <iostream>

using namespace std;

/*  ~деструктор - противоположность конструктора. Вызывается при уничтожении объекта класса
т. е когда он выходит из своей области видимости*/
/*деструктор ВСЕГДА существует в любом классе по умолчанию*/
/*НИКОГДА не имеет параметров*/
/*самому опмсывать нужно только при работе с динамическими структурами данных*/

class valueKeeper{
private:
    int* data;
    public:
    valueKeeper (int size){
        data = new int [size];
        for (int i = 0; i < size; i++){
            data[i] = i;
        }
        cout << "object " << data << " constructor has been called" << endl; 
    }
    ~valueKeeper (){
        delete [] data;
        cout << "object " << data << " destructor has been called" << endl;
    }
};

void create(){
    cout << "begining of implementation" << endl;
    cout << "enter number from 10 to 100" << endl;
    int size_of_array;
    cin >> size_of_array;
    valueKeeper arr(size_of_array);
    cout << "end of implementation" << endl;
}

int main(){
    create();
    return 0;
}