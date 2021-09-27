#include <iostream>
//#include <stack>

using namespace std;

template <typename T>
class Stack{
public:
    Stack();

    //~Stack();

    T top();

    int size();

    void push(T x);

    void pop();

    bool isEmpty();

private:
    class Node{
    public:
        T data;
        Node* pNext;
        /*Node(T data){
            this->data = data;
            pNext = NULL;
        }*/
    };
    int topIndex;;
    Node* Top;

};

template <typename T>
Stack<T>::Stack(){
    Top = NULL;
    topIndex = -1;
}

/*template <typename T>
Stack<T>::~Stack(){
    while (size > 0){
        pop();
    }
}*/

template <typename T>
T Stack<T>::top(){
    if(Top != NULL){
        return Top->data;
    }
    return -1;
}

template <typename T>
void Stack<T>::push(T data){
    ++topIndex;
    Node* recent = new Node();
    recent->data = data;
    recent->pNext = Top;
    Top = recent;
}

template <typename T>
void Stack<T>::pop(){
    --topIndex;
    Node* recent;
    if (Top == NULL){
        return;
    }
    recent = Top;
    Top = Top->pNext;
    delete recent;
}

template <typename T>
bool Stack<T>::isEmpty(){
    return topIndex == -1;
}

template <typename T>
int Stack<T>::size(){
    return topIndex + 1;
}

int main(){
    Stack<int> st;
    st.push(8);
    st.push(9);
    st.push(1);
    while (!st.isEmpty()){
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}
