#include <iostream>

using namespace std;

/*дружественный метод - метод одного класса имеющий доступ к
private и protected полям другого класса*/

/*для доступа к закрытым полям другого класса используется ключевое слово friend*/

/*дружественные методы описывают вне класса*/

/*чтобы классы могли видеть друг друга в начале программы можно описыать их названия не описывая реализацию*/

class apple;
class human;

class human{
    public:
    void take_apple(apple &piece);
};

class apple{
private:
    string colour;
    friend void human::take_apple(apple &piece);
    public:
    apple (string colour){
        this->colour = colour;
    }
};

void human::take_apple(apple &piece){
    cout << piece.colour << " apple has been taken" << endl;
}

int main(){
    apple a("green");
    human alexey;
    alexey.take_apple(a);
    return 0;
}