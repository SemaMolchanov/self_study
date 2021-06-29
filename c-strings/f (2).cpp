#include <iostream>
#include <cstring>

using namespace std;

/*конкатенация строк (две записать в третью)*/

int main(){
    char result[255] = {};
    char str1[255] = "hello ";
    char str2[255] = "world";
    strcat(result, str1);
    strcat(result, str2);
    cout << result;
    return 0;
}