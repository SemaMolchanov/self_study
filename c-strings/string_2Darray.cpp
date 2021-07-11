#include <iostream>
#include <cstring>

using namespace std;

/*двумерный массив строк в Си*/

int main(){
    char *str_arr[] = {"hello ", "world", "!!!"};
    for (int i = 0; i < 3; i++){
        cout << *(str_arr + i);
    }
    return 0;
}