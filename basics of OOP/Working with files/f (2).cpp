#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    string path = "messages.txt";
    fstream fileio;
    fileio.open(path,fstream::in | fstream::out | fstream::app);
    if (!fileio.is_open()){
        cout << "file opening error" << endl;
    }
    else{
        int value;
        string msg;
        cout << "file is opened" << endl;
        cout << "enter 1 to write message to the file" << endl;
        cout << "enter 2 to read all messages from the file" << endl;
        cin >> value;
        if (value == 1){
            cout << "enter your message" << endl;
            cin >> msg;
            fileio << msg << "\n";
        }
        if (value == 2){
            cout << "reading data from the file" << endl;
            while(!fileio.eof()){
                msg = "";
                fileio >> msg;
                cout << msg << endl;
            }
        }
    }
    fileio.close();
    return 0;
}