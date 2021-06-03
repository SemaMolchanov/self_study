#include <iostream>
#include <string>
#include <ctime>

using namespace std;

/*сущности любого типа данных можно хранить в массиве*/
/*поскольку класс - это пользовательский тип данных,
то и объекты класса также можно хранить в массиве*/
/*как в статическом, так и в динамическом*/

class pixel{
private:
    int r;
    int g;
    int b;
public:
    pixel(){
        r = g = b = 0;
    }
    pixel(int r, int g, int b){
        this->r = r;
        this->g = g;
        this->b = b;
    }
    string get_info(){
        return "pixel:\tr = " + to_string(r) + " g = " + to_string(g) + " b = " + to_string(b);
    }
};

int main(){
    srand(time(NULL));
    int size;
    cin >> size;
    pixel arr[size];
    for (int i = 0; i < size; i++){
        arr[i] = pixel(rand() % 256, rand() % 256, rand() % 256);
    }
    for (int i = 0; i < size; i++){
        cout << arr[i].get_info() << endl;
    }
    return 0;
}