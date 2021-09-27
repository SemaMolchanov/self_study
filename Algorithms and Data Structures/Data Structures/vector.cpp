#include <bits/stdc++.h>

using namespace std;

template <typename T> 
class Vector{
    T* arr;
 
    // capacity is the total storage
    // capacity of the vector
    int capacity;
 
    // current is the number of elements
    // currently present in the vector
    int current;
 
public:
    Vector(){
        arr = new T[1];
        capacity = 1;
        current = 0;
    }
 
    void pushBack(T data){
        if (current == capacity) {
            T* temp = new T[2 * capacity];
            for (int i = 0; i < capacity; ++i) {
                temp[i] = arr[i];
            }
            delete[] arr;
            capacity *= 2;
            arr = temp;
        }
        arr[current] = data;
        current++;
    }

    void pushFront(T data){
    }

    void insert(T data, int index){
        if (index == capacity){
            pushBack(data);
        }
        else{
            arr[index] = data;
        }
    }
 
    // function to extract element at any index
    T get(int index){
        if (index > size() - 1 || index < 0){
		    string message = "invalid index  ";
		    message.append(to_string(index));
		    throw out_of_range(message);
	    }
        return arr[index];
    }

    void popBack(){
        current--; 
    }

    int size(){
        return current;
    }
 
    // function to get capacity of the vector
    int getCapacity(){
        return capacity; 
    }
 
    // function to print array elements
    void print(){
        for (int i = 0; i < current; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
 
// Driver code
int main(){
    Vector<int> v;
    v.pushBack(1);
    v.pushBack(2);
    v.pushBack(3);
    v.print();
    cout << endl << v.getCapacity() << endl;
    v.pushFront(4);
    v.print();
    cout << endl << v.getCapacity() << endl;
    return 0;
}