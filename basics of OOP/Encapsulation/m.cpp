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
        y = valueY;                        /*с помощью которой можно инициализировать объект класса*/
    }
    /*point & operator = (const point &other){
        if ()
        this->x = other.x;
        this->y = other.y;
        return *this;
    }*/
    bool operator == (const point &other){
        return (this->x == other.x && this->y == other.y);
    }                                                    /*логические операторы == и != очень легко перегрузить*/
    bool operator != (const point &other){                /*примерно таким же образом можно перегрузить операторы >, <, >=, и <=, но*/
        return !(this->x == other.x && this->y == other.y);/*для класса point, описывающего точку в двухмерном пространстве это бессмысленно*/
    }
    /*если представить, что сложение точек это сложение их Х-координат и У-координат соответственно,
    то оператор сложения можно реализовать вот так(хоть это и абсолютно бессмысленно)*/
    point operator + (const point &other){
        point temp;
        temp.x = this->x + other.x;
        temp.y = this->y + other.y;
        return temp;
    }
    /*можно реализовать также префиксные и постфиксные инкремент и декремент, считая что они уменьшают(увеличивают) 
    значения Х и У у точки на единицу(хоть это еще более бессмысленно)*/
    /*все бессмысленное сделано в учебных целях*/
    point & operator ++(){
        this->y += 1;
        this->x += 1;
        return *this;
    }                                       /*префиксные формы*/
    point & operator --(){
        this->y -= 1;
        this->x -= 1;
        return *this;
    }
    point & operator ++ (int value){
        point tmp(*this);
        this->x += 1;
        this->y += 1;
        return tmp;
    }                                       /*постфиксные формы*/
    point & operator -- (int value){
        point tmp(*this);
        this->x -= 1;
        this->y -= 1;
        return tmp;
    }
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
    point a(5, 1);
    point b(3, 7);
    if (a == b){
        cout << "points are equal" << endl;
    }
    else{
        cout << "points are not equal" << endl;
    }
    /*if (a != b){
        cout << "great" << endl;
    }
    else{
        cout << "bad" << endl;
    }*/
    return 0;
}