#include <iostream>
#include <ctime>

using namespace std;

void swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}

void bubble_sort(int arr[], int size){
    for(int i = 0; i < size; ++i){
        for(int j = i + 1; j < size; ++j){

            //ascending - <
            //descending - >

            if(arr[j] < arr[i]){
                swap(arr[i], arr[j]);
            }
        }
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

    bubble_sort(arr, size);

    for (int i = 0; i < size; ++i){
        cout << arr[i] << " ";
    }
    return 0;
}