#include <iostream>

using namespace std;

template<typename T>
class doublyLinkedList{
public:
	doublyLinkedList();
	~doublyLinkedList();

	void popFront();

	void pushBack(T data);

	void clear();

	int getSize(){
		return size; 
	}

	bool isEmpty();

	T& operator[](const int index);
	
	void pushFront(T data);

	void insert(T data, int index);

	void removeAt(int index);
	
	void popBack();

private:
	//template<typename T>
	class Node{
	public:
	 	Node* pPrev;
		Node* pNext;
		T data;
		
		Node(T data = T(), Node* pNext = nullptr){
			this->data = data;
			this->pNext = pNext;
		}
	};

	int size;
	Node* head;
};


template<typename T>
doublyLinkedList<T>::doublyLinkedList(){
	size = 0;
	head = nullptr;
}


template<typename T>
doublyLinkedList<T>::~doublyLinkedList(){
	clear();
}

template<typename T>
bool doublyLinkedList<T>::isEmpty(){
	return head == nullptr;
}


template<typename T>
void doublyLinkedList<T>::popFront(){
	Node* temp = head;
	head = head->pNext;
	delete temp;
	size--;
}

template<typename T>
void doublyLinkedList<T>::pushBack(T data){
	if (isEmpty()){
		head = new Node(data);
	}
	else{
		Node* current = this->head;
		while (current->pNext != nullptr){
			current = current->pNext;
		}
		current->pNext = new Node(data);
	}
	size++;
}

template<typename T>
void doublyLinkedList<T>::clear(){
	while (size){
		popFront();
	}
}


template<typename T>
T& doublyLinkedList<T>::operator[](const int index){
	if (index > size - 1 || index < 0){
		string message = "invalid index  ";
		message.append(to_string(index));
		throw out_of_range(message);
	}
	Node* current = head;
	for (int i = 0; i < index; i++){
		current = current->pNext;
	}
	return current->data;
}

template<typename T>
void doublyLinkedList<T>::pushFront(T data){
	head = new Node(data, head);
	size++;
}

template<typename T>
void doublyLinkedList<T>::insert(T data, int index){
	if (index > size - 1 || index < 0){
		string message = "invalid index  ";
		message.append(to_string(index));
		throw out_of_range(message);
	}
	if (index == 0){
		pushFront(data);
	}
	else{
		Node* previous = this->head;
		for (int i = 0; i < index - 1; i++){
			previous = previous->pNext;
		}
		Node* newNode = new Node(data, previous->pNext);
		previous->pNext = newNode;
		size++;
	}
}

template<typename T>
void doublyLinkedList<T>::removeAt(int index){
	if (index > size - 1 || index < 0){
		string message = "invalid index  ";
		message.append(to_string(index));
		throw out_of_range(message);
	}
	if (index == 0){
		popFront();
	}
	else{
		Node* previous = this->head;
		for (int i = 0; i < index - 1; i++){
			previous = previous->pNext;
		}
		Node* toDelete = previous->pNext;
		previous->pNext = toDelete->pNext;
		delete toDelete;
		size--;
	}

}

template<typename T>
void doublyLinkedList<T>::popBack(){
	removeAt(size - 1);
}



int main(){

	doublyLinkedList<int> lst;
	lst.pushFront(5);
	lst.pushFront(7);
	lst.pushFront(101);

	for (int i = 0; i < lst.getSize(); i++){
		cout << lst[i] << endl;
	}

	cout << endl << "popBack " << endl << endl;

	lst.popBack();

	for (int i = 0; i < lst.getSize(); i++){
		cout << lst[i] << endl;
	}

	return 0;
}