#include <iostream>

using namespace std;

/*перегрузка оператора индексирования []*/

class myArray{
    private:
    int arr[5]{1, 3, 5, 7, 9};
    public:
    int & operator [] (int index){
        return arr[index];
    }
};

int main(){
    myArray a;
    for (int i = 0; i < 5; i++){
        cout << a[i] << " ";
    }
    return 0;
}