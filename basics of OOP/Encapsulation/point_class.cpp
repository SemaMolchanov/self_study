#include <iostream>

using namespace std;

class point{
    public:
    int x;
    int y;
    int z;
};

int main(){
    point a;
    a.x = 5;
    a.y = 9;
    a.z = 2;
    cout << "coordinates of the point a" << " are:" << endl;
    cout << "x = " << a.x << endl;
    cout << "y = " << a.y << endl;
    cout << "z = " << a.z << endl;
    return 0;
}