#include <iostream>

using namespace std;

/*public методы get и set позволяют взаимодействовать с private полями вне класса*/

class point{
private:    /*поля и методы private видны только внутри класса или для дружественных функций и классов*/
    double x;
    double y;
public:     /*поля и методы public видны везде*/
    void set_x(double value_x){
        x = value_x;
    }
    double get_x(){
        return x;
    }
    void set_y(double value_y){
        y = value_y;
    }
    double get_y(){
        return y;
    }
    void print(){
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
};

int main(){
    point a;
    a.set_x(1.3);
    a.set_y(4.47);
    double result = a.get_y();
    cout << result << endl;
    a.print();
    return 0;
}