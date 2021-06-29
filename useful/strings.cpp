#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string s = "hello";
    reverse(s.begin(), s.end());

    cout << s;
    return 0;
}

#include <iostream>

using namespace std;

int main() {
    string s = "hello";
    cout << s.front() << " " << s.back() << endl;
    cout << s[0] << " " << s[s.size() - 1];
    return 0;
}

/* string::npos - константа строки для find*/

#include <iostream>

using namespace std;

int main() {
    string s1;
    string s2;
    cin >> s1 >> s2;
    int pos = s1.find(s2);
    if (pos == string::npos)
        cout << "NO";
    else {
        cout << "YES" << endl << s1.find(s2);
    }
    return 0;
}

#include <iostream>

using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    int a[s1.size()];
    int cnt = 0;
    int pos = 0; 
    while (s1.find(s2, pos) != string::npos) {
        a[cnt] = s1.find(s2, pos);
        cnt++;
        pos = s1.find(s2, pos) + s2.size();
    }
    cout << cnt << endl;
    for (int i = 0; i < cnt; i++)
        cout << a[i] << " ";

    return 0;
}

/* getline считывает с пробелами*/

#include <iostream>

using namespace std;

int main() {
    string s;
    getline(cin, s); 
    cout << s;
    return 0;
}

#include <iostream>

using namespace std;

int main() {
    string s;
    int cnt;
    while (getline(cin, s)) {
        cnt++;
    }
    cout << cnt;
    return 0;
}

