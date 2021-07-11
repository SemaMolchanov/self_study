#include <iostream>
#include <fstream>

using namespace std;

/*запись (сохранение) объекта класса в файл*/

class point{
    private:
    double x;
    double y;
    double z;
    public:
    point(){
        x = y = z = 0;
    }
    point(double x, double y, double z){
        this->x = x;
        this->y = y;
        this->z = z;
    }
    void print(){
        cout << "x = " << x << "\ty = " << y << "\tz = " << z << endl;
    }
};

int main(){
    point a(7, 8, 9);
    string path = "points.txt";
    ofstream fout;
    fout.open(path, ofstream::app);
    if (!fout.is_open()){
        cout << "file opening error" << endl;
    }
    else{
        cout << "file is opened" << endl;
        fout.write((char*)&a, sizeof(point));
    }
    fout.close();
    return 0;
}