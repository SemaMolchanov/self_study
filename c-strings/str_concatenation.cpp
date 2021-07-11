#include <iostream>
#include <cstring>

using namespace std;

/*конкатенация строк (вторую приклеить после первой)*/

int main(){
    char str1[255] = "hello ";
    char str2[255] = "world";
    cout << "str1 before concatenation = " << str1 << endl;
    strcat(str1, str2);
    cout << "str1 after concatenation = " << str1;
    return 0;
}