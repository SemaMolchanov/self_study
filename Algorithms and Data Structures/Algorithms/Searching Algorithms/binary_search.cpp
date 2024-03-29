#include <iostream>
#include <cmath>

using namespace std;

int binary_search(int arr[], int size, int target_value){
    int left = 0;
    int right = size - 1;

    while (left <= right){
        int middle = floor((left + right)/2);

        if (arr[middle] == target_value){
            return middle;
        }
        else if (arr[middle] < target_value){
            left = middle + 1;
        }
        else{
            right = middle - 1;
        }
    }
    return -1;
}



void verify(int index){
    if (index != -1){
        cout << "target value is found in the list at position " << index << endl;
    }
    else{
        cout << "target value is not found in the list\n";
    }
}

int main(){
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }
    int target_value;
    cin >> target_value;
    int result = binary_search(arr, size, target_value);
    verify(result);
    return 0;
}