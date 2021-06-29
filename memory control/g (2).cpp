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

int main(){
    int size;
    cin >> size;
    int *a = new int [size];
    int *b = new int [size];

    cout << "before copying contents of array b to array a" << endl << endl;

    cout << "array a" << endl;
    fill_array(a, size);
    print_array(a, size);

    cout << "array b" << endl;
    fill_array(b, size);
    print_array(b, size);
    cout << endl;

    /*copying begins here*/

    delete [] a;
    a = new int [size];
    for (int i = 0; i < size; i++){
        a[i] = b[i];
    }

    /*copying ends here*/

    cout << "after copying contents of array b to array a" << endl << endl;

    cout << "array a" << endl;
    print_array(a, size);

    cout << "array b" << endl;
    print_array(b, size);

    delete [] a;
    delete [] b;
    return 0;
}