#include <iostream>
#include <limits.h>

/*чтобы не нарушать инкапсуляцию при работе со static полями нужно
1. сделать эти поля private
2. создать static методы для работы с этими полями*/

/*к таким методам можно обращаться без объекта, а 
сразу через имя класса*/

using namespace std;

class apple{
private:
    string colour;
    double weight_in_gramms;
    int id;
    static int cnt;
    public:
    apple (double weight_in_gramms, string colour){
        this->colour = colour;
        this->weight_in_gramms = weight_in_gramms;
        cnt++;
        id = INT_MAX - cnt;
    }
    int get_id(){
        return id;
    }
    static int get_cnt(){
        return cnt;
    }
};

int apple::cnt = 0;

int main(){
    apple apple1(150, "red");
    apple apple2(120, "yellow");
    apple apple3(100, "green");


    cout << "you've created "<< apple::get_cnt() << " apples" << endl << endl;

    cout << apple1.get_id() << endl;
    cout << apple2.get_id() << endl;
    cout << apple3.get_id() << endl;
    return 0;
}