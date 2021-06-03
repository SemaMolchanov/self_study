#include <iostream>
#include <fstream>

using namespace std;

/*перегрузка операторов потокового ввода и потокового вывода*/

/*>>    И    <<*/

/*при вводе или выводе мы образаемся к полям класса.
Согласно принципам инкапсуляции, поля у класса закрытые (private).
Есть два способа организации ввода-вывода:
1. сделать оператор дружественным к классу (так рекомендует делать документация microsoft)
2. использовать get и set методы*/

/*при перегрузки операторов консольного ввода и вывода с помощью этих операторов автоматически
реализуется чтение(оператор ввода) данных из файла и запись(оператор вывода) данных в файл*/

/*это происходит потому что классы istream->ifstream->fstream и ostream->ofstream->fstream
образуют цепочку наследования и указатель на базовый класс может хранить ссылку на любого своего наследника
поэтому оператор перегруженный для базового класса будет также работать с классами-наследниками*/

class point{
private:
    double x;
    double y;
    double z;
    friend ostream& operator << (ostream& os, const point &pnt);
    friend istream& operator >> (istream& is, point &pnt);
public:
    point(){
        x = y = z = 0;
    }
    point(double x, double y, double z){
        this->x = x;
        this->y = y;
        this->z = z;
    }
};

ostream& operator << (ostream& os, const point &pnt){
    os << pnt.x << " " << pnt.y << " " << pnt.z;
    return os;
}

istream& operator >> (istream& is, point &pnt){
    is >> pnt.x >> pnt.y >> pnt.z;
    return is;
}

int main(){
    point p;
    cin >> p;
    cout << p;
    return 0;
}