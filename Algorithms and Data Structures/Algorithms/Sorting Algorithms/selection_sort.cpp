#include <iostream>
#include <ctime>

using namespace std;

void swap(int &x, int &y){
    /*this function changes values of 2 variables*/
    int temp = x;
    x = y;
    y = temp;
}

int location_of_smallest(int arr[], int size, int start){
    /*this function searches for the smallest element in the array
    and returns its index*/
    int i = start;
    int j = i;
    while (i < size){
        if (arr[i] < arr[j]){
            j = i;
        }
        ++i;
    }
    return j;
}

void selection_sort(int arr[], int size, int i = 0){
    /*this function swaps values of arr[i] and the smallest element in array*/
    while (i < size - 1){
        int j = location_of_smallest(arr, size, i);
        swap(arr[i], arr[j]);
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

    selection_sort(arr, size);

    for (int i = 0; i < size; ++i){
        cout << arr[i] << " ";
    }
    return 0;
}