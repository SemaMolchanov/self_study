#include <iostream>

using namespace std;



class point{
private:    
    double x;
    double y;
public:     
    point (double valueX, double valueY){
        x = valueX;                       /*конструктор класса - public функция внутри без возвращаемого значения*/
        y = valueY;                        /*с помощью которой можно создать объект класса*/
    }
    /*void set_x(double value_x){
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
    }*/
    void print(){
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
};

int main(){
    point a(4.5, 6.57);
    a.print();
    return 0;
}