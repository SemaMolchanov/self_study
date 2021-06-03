#include <iostream>

using namespace std;

void fill_array(int* const a, const int size){
    for (int i = 0; i < size; i++){
        a[i] = rand() % 10;
    }
}
void print_array(const int* const a, const int size){
    for (int i = 0; i < size; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

void push_back(int *&a, int &size, const int value){
    int *b = new int [size + 1];
    for (int i = 0; i < size; i++){
        b[i] = a[i];
    }
    b[size] = value;
    size++;
    delete [] a;
    a = b;
}

void pop_back(int *&a, int &size){
    size--;
    int *b = new int [size];
    for (int i = 0; i < size; i++){
        b[i] = a[i];
    }
    delete [] a;
    a = b;
}

void push_front(int *&a, int &size, const int value){
    size++;
    int *b = new int [size];
    for (int i = 1; i < size; i++){
        b[i] = a[i - 1];
    }
    b[0] = value;
    delete [] a;
    a = b;
}

void pop_front(int *&a, int &size){
    size--;
    int *b = new int [size];
    for (int i = 0; i < size; i++){
        b[i] = a[i + 1];
    }
    delete [] a;
    a = b;
}

void erase(int *&a, int &size, const int index){
    if (index == 0){
        pop_front(a, size);
        return;
    }
    if (index == size - 1){
        pop_back(a, size);
        return;
    }
    int *b = new int [size - 1];
    for (int i = 0; i < index; i++){
        b[i] = a[i];
    }
    for (int i = index + 1; i < size; i++){
        b[i - 1] = a[i];
    }
    size--;
    delete [] a;
    a = b;
}

void insert(int *&a, int &size, const int value, const int index){
    if (index == size + 1){
        push_back(a, size, value);
        return;
    }
    if (index == 0){
        push_front(a, size, value);
        return;
    }
    size++;
    int *b = new int [size];
    for (int i = 0; i < index; i++){
        b[i] = a[i];
    }
    b[index] = value;
    for (int i = index + 1; i < size; i++){
        b[i] = a[i - 1];
    }
    delete [] a;
    a = b;
}

int main(){
    int size, value, index;
    cin >> size;
    int *a = new int [size];
    /*write your code here between new and delete*/
    delete [] a;
    return 0;
}