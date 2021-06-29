#include <iostream>
#include <string>
#include <ctime>

using namespace std;

/*вложенные классы*/
/*внутри одного класса можно описать другой класс,
который будет называться вложенным*/
/*!!!мои выводы!!!*/
/*поскольку класс, это пользовательский тип данных,
 то лучше описывать его внутри private секции бОльшего класса,
 чтобы не нарушать инкапсуляцию*/


class image{
private:
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
    static const int LENGTH = 5;
    pixel arr[LENGTH]{
        pixel(rand() % 256, rand() % 256, rand() % 256),
        pixel(rand() % 256, rand() % 256, rand() % 256),
        pixel(rand() % 256, rand() % 256, rand() % 256),
        pixel(rand() % 256, rand() % 256, rand() % 256),
        pixel(rand() % 256, rand() % 256, rand() % 256)
    };
public:
    void get_image_info(){
        for (int i = 0; i < LENGTH; i++){
            cout << arr[i].get_info() << endl;
        }
    }
};

int main(){
    image img1;
    img1.get_image_info();
    return 0;
}