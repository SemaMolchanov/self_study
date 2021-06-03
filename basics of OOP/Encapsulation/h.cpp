#include <iostream>

using namespace std;

class point{
private:    
    double x;
    double y;
public: 
    point (){
        x = 0;
        y = 0;
    }    
    point (double valueX, double valueY){
        x = valueX;                       /*конструктор класса - public функция внутри без возвращаемого значения*/
        y = valueY;                        /*с помощью которой можно создать объект класса*/
    }
    point (double valueX, bool aboveOX){
        x = valueX;
        if(aboveOX){
            y = 1;
        }
        else{
            y = -1;
        }
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
    point a;
    a.print();
    point b(4.5, 5.5);
    b.print();
    point c(3, false);
    c.print();
    return 0;
}