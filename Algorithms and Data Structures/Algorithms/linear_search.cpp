#include <iostream>

using namespace std;

int linear_search(int* arr, int target_value){
    for (int i = 0; i < (sizeof(arr)/sizeof(int)); ++i){
        if (arr[i] == target_value){
            return i;
        }
    }
    return -1;
}

void verify(int index){
    if (index != -1){
        cout << "target value is found in the list at position" << index << endl;
    }
    else{
        cout << "target value is not found in the list\n";
    }
}

int main(){
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; ++i){
        cin >> arr[i];
    }
    int target_value;
    cin >> target_value;
    int result = linear_search(arr, target_value);
    verify(result);
    return 0;
}