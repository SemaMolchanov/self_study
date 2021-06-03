#include <iostream>
#include <cstring>

using namespace std;

/*так как в Си строка представляет собой массив, мы можем работать с ней с помощью указателей*/

void print(char *string){
    cout << "string length = " << strlen(string) << endl;
    cout << "string = " << string;
}

int main(){
    char string[] = "hello";
    print(string);
    return 0;
}