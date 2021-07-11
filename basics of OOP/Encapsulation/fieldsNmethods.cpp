#include <iostream>

using namespace std;

/*класс - пользовательский тип данных хранящий примимтивные типы данных*/
/*класс - шаблон объекта. В классе описаны свойства присущие всем объектам*/
/*объект - экземпляр класса имеющий конкретные параметры определенных в классе свойств*/

class human{  /*класс human описывает шаблон человека*/
    public:
    /* поля класса - примитивные типы данных\/*/
    string name;
    int age;
    int height;
    int weight;
    /*методы класса - функции описанные в классе\/*/
    void print_human_info(){
        cout << "human name - " << name << endl;
        cout << "humam age - " << age << endl;
        cout << "human height - " << height << " cm" << endl;
        cout << "human weight - " << weight << " kg" << endl;
    }
};

int main(){
    human first_human; /*first_human - объект(экземпляр) класса human*/
    first_human.age = 30;
    first_human.name = "Ivanov Ivan";
    first_human.height = 185;
    first_human.weight = 80;
    first_human.print_human_info();
    return 0;
}