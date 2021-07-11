#include <iostream>

using namespace std;

class coffeeGrinder{
private:
    bool voltageIsNormal(){
        return false;
    }
public:
    void start(){
        if (voltageIsNormal()){
            cout << "vjuh" << endl;
        }
        else{
            cout << "beep beep!!! we have a problem" << endl;
        }
    }
};

int main(){
    coffeeGrinder LG;
    LG.start();
    return 0;
}