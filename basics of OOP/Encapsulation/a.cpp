#include <iostream>

using namespace std;

/*класс - пользовательский тип данных хранящий примимтивные типы данных*/
/*класс - шаблон объекта. В классе описаны свойства присущие всем объектам*/
/*объект - экземпляр класса имеющий конкретные параметры определенных в классе свойств*/

class human{  /*класс human описывает шаблон человека*/
    public:
    string name;
    int age;
    int height;
    int weight;
};

int main(){
    human me; /*me - экземпляр(объект) класса human*/
    me.name = "Semen";
    me.age = 17;
    me.height = 192;
    me.weight = 78;
    cout << "Human info" << endl << endl;
    cout << "human name - " << me.name << endl;
    cout << "human age - " << me.age << endl;
    cout << "human height -" << me.height << " cm" << endl;
    cout << "human weight - " << me.weight << " kg" <<  endl;
    return 0;
}