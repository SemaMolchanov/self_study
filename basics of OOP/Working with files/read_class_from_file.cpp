#include <iostream>
#include <fstream>

using namespace std;

/*считывание объекта класса из файла*/

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
    string path = "points.txt";
    ifstream fin;
    fin.open(path, ofstream::app);
    if (!fin.is_open()){
        cout << "file opening error" << endl;
    }
    else{
        cout << "file is opened" << endl;
        point pnt;
        while(fin.read((char*)&pnt, sizeof(point))){
            pnt.print();
        }
    }
    fin.close();
    return 0;
}