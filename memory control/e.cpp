#include <iostream>
#include <ctime>

using namespace std;

int main(){
    srand(time(NULL));
    int row, col;
    cin >> row >> col;
    int **m = new int* [row];
    for (int r = 0; r < row; r++){
        m[r] = new int [col];
    }

    for (int r = 0; r < row; r++){
        for (int c = 0; c < col; c++){
            m[r][c] = rand() % 10;
        }
    }
    for (int r = 0; r < row; r++){
        for (int c = 0; c < col; c++){
            cout << m[r][c] << " ";
        }
        cout << endl;
    }

    for (int r = 0; r < row; r++){
        delete [] m[r];
    }
    delete [] m;
    return 0;
}