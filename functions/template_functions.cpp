#include <iostream>
#include <cmath>

/*шаблонные функции*/
/*могут работать с любым типом данных (принимать параметры этого типа, возвращать значение этого типа и т.д)
если для него определены операции или перегружены соответствующии операторы*/

using namespace std;

/*будет принимать параметры только одного типа t*/

template <typename t>
void print_one_type(t a, t b){
    cout << "parameter a = " << a;
    cout << "parameter b = " << b;
}

/*типы t1 и t2 могут быть между собой как разные так и одинаковые*/

template <typename t1, typename t2>
void print_two_types(t1 c, t2 d){
    cout << "parameter c = " << c;
    cout << "parameter d = " << d;
}

/*функция принимает параметры типов t3 и t4, но возвращает значение именно типа t3*/
template <typename t3, typename t4>
t3 sum_two_types(t3 e, t4 f){
    return e + f;
}

int main(){
    print_one_type(50, 40);
    print_two_types("ananas", 34.5);
    cout << sum_two_types(34.5, 20);
    return 0;
}