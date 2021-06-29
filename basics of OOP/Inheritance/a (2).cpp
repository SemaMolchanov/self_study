#include <iostream>

using namespace std;

/*агрегация и композиция*/
/*ситуация когда два класса используются совместтно
и один не может существовать без второго - композиция*/
/*ситуация когда два класса используются совместно,
но при этом могут существовать по отдельности - агрегация*/

class cap{
    private:
    string color = "red";
    public:
    string get_color(){
        return color;
    }
    void set_color(string color){
        this->color = color;
    }
};

class mannequin{
private:
    cap cp;
public:
    void inspect_mannequins_cap(){
        cout << "mannequin's cap is " << cp.get_color() << endl;
    }
};

class human{
private:
    class brain{
    public:
        void think(){
            cout << "I am thinking" << endl;
        }
    };
    brain brn;
    cap cp;
public:
    void think(){
        brn.think();
    }
    void inspect_human_cap(){
        cout << "human's cap is " << cp.get_color() << endl;
    }
};

int main(){
    cap cappy;

    /*класс cap можно использовать совместно
    как с классом human тaк и с классом mannequin*/

    mannequin manny;
    manny.inspect_mannequins_cap();
    human alex;
    alex.inspect_human_cap();

    /*класс brain можно использовать совместно
    только с классом человек*/

    alex.think();
    return 0;
}