#include <iostream>

using namespace std;

int main() {

    for (int i = 1;;i++) {
        if (i % 2 == 0) {
            continue;
        }

        cout << i << " ";
        if (i > 100) {
            break;
        }
    }
    return 0;
}

#include <iostream>

using namespace std;

int main() {
    string s;
    int k = 0;
    while (cin >> s) { 
        k++;           
    }
    cout << k;
    return 0;
}

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 10;
    for (;;) { 
        cout << i << " ";
    }
    return 0;
}

#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    while (a > 0 && b > 0) { 
        if (a > b) {
            a = a % b;
        } else {
            b = b % a;
        }
    }
    cout << a + b;    
    return 0;
}

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 1 || n == 2)
        cout << 1;
    else {
        int f1 = 1;
        int f2 = 1;
        int f3;
        for (int i = 3; i <= n; i++) { 
            f3 = f1 + f2;
            f1 = f2;
            f2 = f3;            
        }
        cout << f3;
    }
    return 0;
}