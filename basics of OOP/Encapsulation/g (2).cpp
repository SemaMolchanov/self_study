#include <iostream>

using namespace std;



class point{
private:    
    double x;
    double y;
public:     
    /*если мы не прописываем конструктор в классе, то компилятор создает конструкор по умолчанию*/
    /*вот такой*/
    point (){}
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
    a.set_x(95);
    a.set_y(101.5);
    a.print();
    return 0;
}