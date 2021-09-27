#include <iostream>
//#include <stack>
#define MAXSIZE 101

using namespace std;

template <typename T>
class Stack{
private:
    T arr[MAXSIZE];
    int topIndex;

public:
    Stack();

    T top();

    int size();

    bool isEmpty();

    void push(T x);

    void pop();
};

template <typename T>
Stack<T>::Stack(){
        topIndex = -1;
    }

template <typename T>
T Stack<T>::top(){
        if(topIndex == -1) {
            return -1;
        }
        return arr[topIndex];
    }

template <typename T>
void Stack<T>::push(T data){
    if (topIndex = MAXSIZE - 1){
        cout << "ERROR:" << endl << "stackOverFLow" << endl;
    }
    arr[++topIndex] = data;
}
    
template <typename T>
void Stack<T>::pop(){
    if(topIndex == -1){
        cout << "ERROR:" << endl << "No element to pop" << endl;
    }
    topIndex--;
}

template <typename T>
int Stack<T>::size(){
    return topIndex + 1;
}

template <typename T>
bool Stack<T>::isEmpty(){
    return topIndex == -1;
}


int main(){
    return 0;
}

