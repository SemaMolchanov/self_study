int factorial(int n){
    if (n == 0 || n == 1){
        return 1;
    }
    arr[n] = n * factorial(n-1);
    return arr[n];
}

#include <iostream>

using namespace std;

int arr[45];

int fibonacci(int n){
    if (n == 1){
        return 0;
    }
    if (n == 2){
        return 1;
    }
    arr[n] = fibonacci(n-1) + fibonacci(n-2);
    return arr[n];
}

int main(){
    int n;
    cin >> n;
    cout << fibonacci(n) << endl;
    return 0;
}

#include <iostream>
#include <cmath>

using namespace std;

bool palindrome(int left, int right, string s, int cnt){
    if (left <= right){
        if (s[left] != s[right]){
            return false;
        }
        if (cnt == ceil(s.size()/2)){
            return true;
        }
        if (s[left] == s[right]){
            cnt++;
        }
    }
    return palindrome(left + 1, right - 1, s, cnt);
}

int main(){
    string s;
    cin >> s;
    int cnt = 0;
    cout << (palindrome(0, s.size() - 1, s, cnt) ? "Yes" : "No");
    return 0;
}

void to_bin(int n){
    if (n == 0){
        return;
    }
    to_bin(n/2);
    cout << n%2;
}

void to_k_inary_converter(int n, int k){
    if (n == 0){
        return;
    }
    to_k_inary_converter(n / k, k);
    int c = n % k;
    if (c > 9){
        cout << char(55 + c);
        return;
    }
    cout << char(c + 48);
}

#include <iostream>

using namespace std;
int cnt;

void hanoi(char a, char b, char c, int n) {
    if (n == 1) {
        cout << a <<  "->" << c << endl;
        cnt++;
        return;
    }
    hanoi(a, c, b, n - 1);
    cout << a << "->" << c << endl;
    cnt++;
    hanoi(b, a, c, n - 1);
}

int main() {
    cnt = 0;
    int n;
    cin >> n;
    hanoi('a', 'b', 'c', n);
    cout << cnt;
    return 0;
}
