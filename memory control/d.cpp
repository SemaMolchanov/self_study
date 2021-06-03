#include <iostream>
#include <ctime>

using namespace std;

int main(){
    srand(time(0));
    int size;
    cin >> size;
    int *arr = new int [size];
    for (int i = 0; i < size; i++){
        arr[i] = rand() % 10;
    }
    for (int i = 0; i < size; i++){
        cout << *(arr + i) << " ";
    }
    delete [] arr;
    return 0;
}