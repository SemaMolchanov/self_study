#include <iostream>
#include <ctime>

using namespace std;

void insert_ith(int arr[], int size, int i){
    int temp = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j] > temp){
        arr[j + 1] = arr[j];
        j = j - 1;
    }
    arr[j + 1] = temp;
}

void insertion_sort(int arr[], int size, int i = 1){
    while (i < size){
        insert_ith(arr, size, i);
        i++;
    }
}

int main(){
    srand(time(NULL));

    cout << "Enter size of an array: " << endl;
    int size;
    cin >> size;
    int arr[size];

    for (size_t i = 0; i < size; ++i){
        arr[i] = rand() % size;
    }

    cout << "unsorted array:" << endl;

    for (size_t i = 0; i < size; ++i){
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "sorted array:" << endl;

    insertion_sort(arr, size);

    for (int i = 0; i < size; ++i){
        cout << arr[i] << " ";
    }
    return 0;
}