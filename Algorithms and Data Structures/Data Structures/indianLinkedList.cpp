#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    //Node(string _val) : val(_val), next(nullptr) {}
};

struct linkedList {
    Node* first;
    Node* last;

    linkedList(){
        first = NULL; 
        last = NULL;
    }

    Node* operator[] (const int index) {
        if (isEmpty()) {
            return NULL;
        }
        Node* temp = first;
        for (int i = 0; i < index; i++) {
            temp = temp->next;
            if (temp == NULL){
                return NULL; 
            }
        }
        return temp;
    }

    bool isEmpty(){
        return first == NULL;
    }

    void pushBack(int data) {
        Node* recent = new Node();
        recent->data = data;
        recent->next = NULL;
        if (isEmpty()) {
            first = recent;
            last = recent;
            return;
        }
        last->next = recent;
        last = recent;
    }

    void pushFront(int data){
        Node* recent = new Node();
        recent->data = data;
        recent->next = NULL;
        recent->next = first;
        first = recent;
    }

    void insert(int data, int index){
        if (index == 1){
            pushFront(data);
            return;
        }
        Node* recent = new Node();
        recent->data = data;
        recent->next = NULL;
        Node* temp = first;
        for (int i = 0; i < index - 2; ++i){
            temp = temp->next;
        }
        recent->next = temp->next;
        temp->next = recent;
    }

    void remove(int index){
        if (index == 1){
            popFront();
            return;
        }
        Node* temp1 = first;
        for (int i = 0; i < index - 2; ++i){
            temp1 = temp1->next;
        }
        Node* temp2 = temp1->next;
        temp1->next = temp2->next;
        delete temp2;
    }

    void popFront() {
        if (isEmpty()){
            return;
        }
        Node* temp = first;
        first = temp->next;
        delete temp;
    }

    void popBack() {
        /*if (isEmpty()){
            return;
        }
        if (first == last) {
            popFront();
            return;
        }
        Node* temp = first;
        while (temp->next != last){
            temp = temp->next;
        }
        temp->next = NULL;
        delete last;
        last = temp;*/
        
    }

    void reverse(){
        Node *prev, *current, *next;
        current = first;
        prev = NULL;
        while (current != NULL){
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        first = prev;
    }

    void print(){
        if (isEmpty()){ 
            return;
        }
        Node* temp = first;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    

};

int main()
{
    linkedList l;
    l.pushBack(5);
    l.pushFront(2);
    l.insert(1, 2);
    l.pushBack(4);
    l.remove(3);
    l.print();
    cout << l[1]->data << endl;
    l.reverse();
    l.print();
    l.popFront();
    l.print();
    l.popBack();
    l.print();
    return 0;
}