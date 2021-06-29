#include <iostream>
#include <ctime>

using namespace std;

int main(){
    srand(time(NULL));
    cout << "enter the array size" << endl;
    int size;
    cin >> size;
    int a[size];
    for (size_t i = 0; i < size; i++){
        a[i] = rand() % 7;
    }
    cout << "here is the array of random numbers" <<  endl;
    for (size_t i = 0; i < size; i++){
        cout << a[i] + 1 << " ";
    }
    return 0;
}