#include <iostream>
#include <fstream>

using namespace std;

/*сохранение (запись) данных в файл*/

int main(){
    string path = "digits.txt";
    int lines = 5;
    ofstream fout;
    fout.open(path);
    if (!fout.is_open()){
        cout << "file opening error" << endl;
    }
    else{
        for(int i = 0; i < lines; i++){
            cout << "enter the number" << endl;
            int digit;
            cin >> digit;
            fout << digit;
            fout << "\n";
        }
    }
    fout.close();
    return 0;
}