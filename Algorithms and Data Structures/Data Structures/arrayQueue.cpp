#include <iostream>
#define MAXSIZE 101

using namespace std;

template <typename T>
class Queue{
private:
    T arr[MAXSIZE];
    int frontIndex;
    int backIndex;

public:
    Queue();

    T front();

    T back();

    int size();

    bool isEmpty();

    void enqueue(T x);

    void dequeue();
};

template <typename T>
Queue<T>::Queue(){
    frontIndex = -1;
    backIndex = -1;
}

template <typename T>
T Queue<T>::front(){
    return arr[frontIndex];
}

template <typename T>
T Queue<T>::back(){
    return arr[backIndex];  
}

template <typename T>
void Queue<T>::enqueue(T data){
    if (((backIndex + 1) % MAXSIZE) == frontIndex){
        cout << "ERROR:" << endl;
        cout << "Queue is full. It is impossible to enqueue one more element" << endl;
        return;
    }
    else if (isEmpty()){
        frontIndex = backIndex = 0;
    }
    else{
        ++backIndex;
    }
    arr[backIndex] = data;
}
    
template <typename T>
void Queue<T>::dequeue(){
    if (isEmpty()){
        return;
    }
    if (frontIndex == backIndex){
        frontIndex = backIndex = -1;
    }
    frontIndex = (frontIndex + 1) % MAXSIZE;
}

template <typename T>
int Queue<T>::size(){
    return (frontIndex - backIndex) + 1;
}

template <typename T>
bool Queue<T>::isEmpty(){
    return frontIndex == -1 && backIndex == -1;
}


int main(){
    return 0;
}