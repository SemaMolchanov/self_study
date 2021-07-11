#include <iostream>

using namespace std;

/*все методы дружественного класса имеют доступ к закрытым полям класса,
в отношении которого данный класс является дружественным*/

/*дружественность нарушает инкапсуляцию поскольку теперь закрытые поля класса могут быть изменены
не только внутри него. Поэтому не стоит злоупотреблять дружественными функциями, методами, классами*/


class apple;
class human;

class human{
    public:
    void take_apple(apple &piece);
    void eat_apple(apple &piece);
};

class apple{
    friend human;
private:
    string colour;
    public:
    apple (string colour){
        this->colour = colour;
    }
};

void human::take_apple(apple &piece){
    cout << piece.colour << " apple has been taken" << endl;
}

void human::eat_apple(apple &piece){
    cout << piece.colour << " apple has been eaten" << endl;
}

int main(){
    apple a("green");
    human alexey;
    alexey.take_apple(a);
    alexey.eat_apple(a);
    return 0;
}