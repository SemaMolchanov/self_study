#include <iostream>
#include <cstring>

using namespace std;

/*int strlen(const char *str){
    int count = 0;
    while (str[count] != '\0'){
        count++;
    }
    return count;
}*/

class myString{
    private:
    /*pointer to array of chars where string is preserved*/
    char *str; 
    /*length of the string*/
    int length;

    friend ostream& operator << (ostream& os, const myString &myStr);
    friend istream& operator >> (istream& is, myString &myStr);

    public:
    /*default constructor*/
    myString(){
        str = nullptr;  
        length = 0;
    }
    /*constructor with parameters*/
    myString(char *str){
        length = strlen(str);
        this->str = new char [length + 1];
        for (int i = 0; i < length; i++){    
            this->str[i] = str[i];
        }
        this->str[length] = '\0';
    }
    /*copy constructor*/
    myString(const myString &other){
        length = strlen(other.str);
        this->str = new char [length + 1];
        for (int i = 0; i < length; i++){  
            this->str[i] = other.str[i];
        }
        this->str[length] = '\0';
    }
    /*move constructor*/
    myString(myString &&other){
        this->length = other.length;
        this->str = other.str;
        other.str = nullptr;
    }
    /*destructor*/
    ~myString(){
        delete [] this->str;
    }
    /*overloaded assignment operator*/
    myString& operator = (const myString &other){
        if (this->str != nullptr){
            delete [] this->str;
        }
        length = strlen(other.str);
        this->str = new char [length + 1];
        for (int i = 0; i < length; i++){
            this->str[i] = other.str[i];
        }
        this->str[length] = '\0';
        return *this;
    }
    /*overloaded plus operator*/
    /*implements string concatenation*/
    myString operator + (const myString &other){
        myString newstr;
        newstr.str = new char [strlen(this->str) + strlen(other.str) + 1];
        newstr.length = strlen(this->str) + strlen(other.str);
        int i = 0;
        for (; i < strlen(this->str); i++){
            newstr.str[i] = this->str[i];
        }
        for (int j = 0; i < strlen(other.str); j++, i++){
            newstr.str[i] = other.str[j];
        }
        newstr.str[strlen(this->str) + strlen(other.str)] = '\0';
        return newstr;
    }
    /*overloaded equality operator*/
    /*returns true if strings are equal and false otherwise*/
    bool operator == (const myString &other){
        if (this->length != other.length){
            return false;
        }
        for (int i = 0; i < this->length; i++){
            if (this->str[i] != other.str[i]){
                return false;
            }
        }
        return true;
    }
    /*overloaded inequality operator*/
    /*returns true if strings are not equal and false if strings are equal*/
    bool operator !=(const myString &other){
        return !(this->operator==(other));
    }
    /*overaloaded indexation operator*/
    /*allows to access element of the string with given index*/
    char& operator [] (int index){
        return this->str[index];
    }
    /*size method*/
    /*returns amount of symbols in the string(its length)*/
    int size(){
        return length;
    }

};

ostream& operator << (ostream& os, const myString &myStr){
    os << myStr.str;
    return os;
}

istream& operator >> (istream& is, myString &myStr){
    is >> myStr.str;
    return is;
}

int main(){
    myString s;
    cin >> s;
    cout << s;
    return 0;
}