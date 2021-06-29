#include <iostream>

using namespace std;

int main() {
    int n;
    int a[100];

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
/* таблица умножения */
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) { 
        for (int j = 1; j <= n; j++) { 
            cout << i * j << " ";
        }
        cout << endl;
    }
    return 0;
}

/* заполнение двумерного массива с помощью вложенного цикла*/

#include <iostream>

using namespace std;

int main() {
    int n, m;
    int a[100][100];

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    cout << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}