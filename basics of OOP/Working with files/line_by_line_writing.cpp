#include <iostream>
#include <fstream>

using namespace std;

/*построчное считывание данных из файла*/

int main(){
    string path = "lines.txt";
    ifstream fin;
    fin.open(path);
    if (!fin.is_open()){
        cout << "file opening error";
    }
    else{
        string str;
        while(!fin.eof()){
            str = "";
            getline(fin, str);
            cout << str << endl;
        }
    }
    fin.close();
    return 0;
}