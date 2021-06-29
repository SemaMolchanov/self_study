#include <iostream>

using namespace std;

/*указатель на функцию позволяет передавать одну функцию в качестве
параметра в другую функцию*/

/*синтаксис указателя на функцию*/

/*тип_возвращаемого_значения (*имя_указателя)(параметры)*/

/*параметры необязательно, их у функции может и не быть*/


string get_data_from_database(){
    return "data from database";
}

string get_data_from_server(){
    return "data from server";
}

string get_data_from_source(){
    return "data from source";
}

void show_info(string (*data_collector)()){
    cout << data_collector() << endl;
}

int main(){
    show_info(get_data_from_database);
    return 0;
}