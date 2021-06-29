#include <iostream>
#include <cmath>

using namespace std;

/*перегрузка функции*/
/*много функций могут иметь одно и то же имя, но принимать разные типы и разное количество параметров
и возвращать разные типы значений и даже иметь абсолютно разную реализацию*/

int pluss(int a, int b){
    return a + b;
}

void pluss(string s, string c){
    cout << "string concatenation = " << s + c;
}

double pluss(double a, double b, double c){
    double d = a + b + c;
    return floor(d);
}

int main(){
    cout << (20, 50) << endl;
    cout << pluss(5.5, 4.25, 3.0) << endl;
    pluss("grape", "fruit");
    return 0;
}