#include <iostream>
#include <limits.h>

/*static поле класса - поле, имеющее одно значение для всех объектов класса*/
/*при изменении значения static поля одного объекта его значение меняется для всех объектов класса*/
/*объявляются в классе но для работы с ними их нужно инициализировать начальным значением
а это уже делается вне класса*/
/*к ним можно обращаться как через экземпляры класса, так и через сам класс
с помощью специального синтаксиса*/
/*простейшее применение static полей - генерация индивидуального id
для каждого созданного объекта класса*/
/*здесь static поле описано как public, но это просто для примера и так делать нельзя,
потому что это нарушает инкапсуляцию*/

using namespace std;

class apple{
private:
    string colour;
    double weight_in_gramms;
    int id;
    public:
    static int cnt;
    apple (double weight_in_gramms, string colour){
        this->colour = colour;
        this->weight_in_gramms = weight_in_gramms;
        cnt++;
        id = INT_MAX - cnt;
    }
    int get_id(){
        return id;
    }
};

int apple::cnt = 0;

int main(){
    apple apple1(150, "red");
    apple apple2(120, "yellow");
    apple apple3(100, "green");


    cout << "you've created "<< apple::cnt << " apples" << endl << endl;

    cout << apple1.get_id() << endl;
    cout << apple2.get_id() << endl;
    cout << apple3.get_id() << endl;
    return 0;
}