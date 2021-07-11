#include <iostream>
#include <cstring>

using namespace std;

/*при описании в фигурных скобках последним элементом всегда 
указывается терминирующий нуль*/

int main(){
    char string[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    cout << string;
    return 0;
}