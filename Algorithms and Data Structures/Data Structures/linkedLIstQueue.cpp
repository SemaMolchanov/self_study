#include <iostream>

using namespace std;

template <typename T>
class Queue{
public:
    Queue();

    //~Queue();

    T front();

    T back();

    int size();

    void enqueue(T x);

    void dequeue();

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
    int frontIndex;
    int backIndex;
    Node* Front;
    Node* Back;
};

template <typename T>
Queue<T>::Queue(){
    frontIndex = -1;
    backIndex = -1;
    Front = NULL;
    Back = NULL;
}

/*template <typename T>
Queue<T>::~Queue(){
    while (size > 0){
        dequeue();
    }
}*/

template <typename T>
T Queue<T>::front(){
    return Front->data;
}

template <typename T>
T Queue<T>::back(){
    return Back->data;
}

template <typename T>
void Queue<T>::enqueue(T data){
    Node* recent = new Node();
    recent->data = data;
    recent->pNext = NULL;

    if (isEmpty()){
        frontIndex = backIndex = 0;
        Front = Back = recent;
        return;
    }
    ++backIndex;
    Back->pNext = recent;
    Back = recent;
}

template <typename T>
void Queue<T>::dequeue(){
    Node* temp = Front;
    if (Front == NULL){
        return;
    }
    if (Front == Back){
        Front = Back = NULL;
        frontIndex = backIndex = -1;
    }
    else{
        Front = Front->pNext;
        ++frontIndex;
    }
    delete temp;
}

template <typename T>
bool Queue<T>::isEmpty(){
    return Front == NULL && Back == NULL;
}

template <typename T>
int Queue<T>::size(){
    return (backIndex - frontIndex) + 1;
}

int main(){
    Queue<int> q;
    q.enqueue(5);
    q.enqueue(4);
    q.enqueue(3);
    while(!q.isEmpty()){
        cout << "size = " << q.size() << endl;
        cout << q.front() << endl;
        q.dequeue();
    }
    return 0;
}