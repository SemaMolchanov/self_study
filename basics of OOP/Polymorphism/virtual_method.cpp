#include <iostream>

using namespace std;


/* virtual - ключевое слово, позволяющее переопределять в классе_наследнике функции,
которые были описаны в базовом классе*/

/*override - ключевое слово, благодаря которому компилятор контролирует переопределение*/



class gun{
public:
    virtual void shoot(){
        cout << "BANG" << endl;
    }
};

class machinegun : public gun{
public:
    void shoot() override{
        cout << "BANG BANG BANG" << endl;
    }
};

class player{
public:
    void shoot(gun *g){
        g->shoot();
    }
};

int main(){
    player p;
    gun g;
    machinegun mg;

    p.shoot(&g);
    p.shoot(&mg);
    return 0;
}