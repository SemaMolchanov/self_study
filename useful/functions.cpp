int sum_of_digits(int number){
    int sum = 0;
    if (number > 0){
        while (number != 0){
            sum = sum + number%10;
            number = number/10;
        }
    }
    return sum;
}

char to_upper(char c){
    if (c >= 'a' && c <= 'z'){
        c = c - 32;
    }
    return c;
}

bool is_prime(int x) {
    if (x < 2) {
        return false;
    }
    bool answer = true;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            answer = false;
        }
    }
    return answer;
}

long long itself_power(long long x){
    long long product;
    if (x == 0){
        product = 1;
        return product;
    }
    product = 1;
    for (int i = 0; i < x; i++){
        product *= x;
    }
    return product;
}

/*bool is_palindrome(vector<int> v){
    for(int i = 0; i < v.size()/2; i++){
        if(v[i] != v[v.size()-1 - i]){
            return false;
        }
    }
    return true;
}*/

/*void to_bin(int n){
    string s = "";
    if(n == 0){
        s = "0";
    }
    while(n != 0){
        s += char(n%2 + 48);
        n /= 2;
    }
    for(int i = 0; i < s.size()/2; i++){
        swap(s[i], s[s.size()-1-i]);
    }
    cout << s << endl;
}*/