#include <iostream>
#include <ctime>

using namespace std;

void combine(int arr[], int start, int middle, int end){
    //for the total size of the merged array

    int* buffer = new int[end+1];

    int temp = start;
    while(temp <= end){
        buffer[temp] = arr[temp];
        temp++;
    }

    int i = start;
    int j = middle + 1;
    temp = start;

    while(i <= middle && j <= end){
        if(buffer[i] <= buffer[j]){
            arr[temp] = buffer[i];
            i++;
        }
        else{
            arr[temp] = buffer[j];
            j++;
        }
        temp++;
    }

    while(i <= middle){
        arr[temp] = buffer[i];
        i++;
        temp++;
    }

    while(j <= end){
        arr[temp] = buffer[j];
        j++;
        temp++;
    }

    delete[] buffer;
}

//auxiliary function (helper function)

void mergeSort(int arr[], int start, int end){
    if(start >= end){
      return;
    }

    int middle = (start + end)/2;
    
    mergeSort(arr, start, middle);
    mergeSort(arr, middle + 1, end);
    combine(arr, start, middle, end);
}

//wrapper function

void merge_sort(int arr[], int size){ 
  mergeSort(arr, 0, size - 1);
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

    merge_sort(arr, size);

    for (int i = 0; i < size; ++i){
        cout << arr[i] << " ";
    }
    return 0;
}