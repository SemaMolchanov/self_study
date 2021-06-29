#include <iostream>
#include <fstream>

using namespace std;

/*посимвольное считывание данных из файла*/

int main(){
    string path = "digits.txt";
    ifstream fin;
    fin.open(path);
    if (!fin.is_open()){
        cout << "file opening error";
    }
    else{
        char symbol;
        while(fin.get(symbol)){
            cout << symbol;
        }
    }
    fin.close();
    return 0;
}