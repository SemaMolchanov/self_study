#include <iostream>

using namespace std;

/*дружественная функция описана вне класса но имеет доступ к private и protected полям класса*/
/*чтобы функции описаная вне класса имела доступ к его закрытым полям
нужно в классе описать прототип функции используя ключевое слово friend*/

class point{
private:    
    double x;
    double y;
    friend void change_x(point &value);
public: 
    point (){
        x = 0;
        y = 0;
    }    
    point (double x, double y){
        this->x = x;                        
        this->y = y;                        
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
        cout << "x = " << x << '\t' << "y = " << y << endl;
    }
};

void change_x(point &value){
    value.x = -1;
}

int main(){
    point a(5.5, 6);
    a.print();
    change_x(a);
    a.print();
    return 0;
}