#include <iostream>

using namespace std;

/*OOP - object-oriented programming. Programming paradigm that is used
to simulate real-life objects' properties and behavior in code*/

/*class - user-defined datatype that describes a real-life object using 
primitive datatypes. It is a template for an object*/

/*object - instance of class*/

class AbstractEmplopyee{
    /*Abstract class - class that has at least one pure virtual function*/
    /*Pure virtual function has no realization, it just assigns standard name (interface)
    to function and realizaton of this fucntion should be described in all inherited classes
    .It may be different in each class*/

    virtual void AskForPromotion() = 0;
};

class Employee : AbstractEmplopyee{
/*fields - properties that an object will have*/

private:
/*fields are kept under "private" and "protected" access modifiers -
so that another programmer that uses this class without knowing its
realization has no access to them and therefore cannot ruin
program's logic. This OOP principle is called encapsulation*/

    string Company;
    int Age;
protected:
    string Name;
public:
/*methods - functions, that describe object's behavior*/

    Employee(string name, string company, int age){
    /*constructor - a special method (function), that has no return type.
    It is called everytime a programmer creates an object and its used to assign
    some initial properties to the object*/

        Name = name;
        Company = company;
        Age = age;
    }

    /*default constructor looks like this*/
    Employee(){}

    /*Since fields are encapsulated we use "public" methods to access them.
    Such a methods are called "getters" and "setters"*/

    string getName(){
        return Name;
    }
    void setName(string name){
        Name = name;
    }
    string getCompany(){
        return Company;
    }
    void setCompany(string company){
        Company = company;
    }
    int getAge(){
        return Age;
    }
    void setAge(int age){
        if (age >= 18){
            Age = age;
        }
    }
    
    /*usual methods just describe behavior that object may have*/

    void IntroduceYourself(){
         cout << "My name is " << Name << "." << endl;
         cout << "I work for " << Company << "." << endl;
         cout << "I'm " << Age << " years old."  << endl;
    }
    void AskForPromotion(){
        if (Age >= 30){
            cout << "Congratulations, " << Name << " you'll be promoted." << endl;
        }
        else{
            cout << "Sorry, " << Name << ", no promotion for you." << endl;
        }
    }

    /*virtual function. "Virtual" keyword allows changing this function's realization
    in child classes*/

    virtual void work(){
        cout << Name << " is cheking email, tasks backlog and performing these tasks." << endl;
    }
};

/*Inheritance - OOP principle according to which one class (child class) can inherit
properties of another class (parent class). Child class also has its own unique properties
and behavior which makes parent class more "common" and child class more "specific"*/

class Developer : public Employee{
private:
    string ProgrammingLanguage;
public:
    Developer(string name, string company, int age, string programmingLanguage)
        : Employee(name, company, age){
            ProgrammingLanguage = programmingLanguage;
        }
    void fixBug(){
        cout << Name << " is fixing bug using " << ProgrammingLanguage << "." << endl;
    }
    void work() override{
        cout << Name << " is writing " << ProgrammingLanguage << " code." << endl;
    }
};

class Teacher : public Employee{
private:
    string Subject;
public:
    Teacher(string name, string company, int age, string subject)
        : Employee(name, company, age){
            Subject = subject;
        }
    void prepareLesson(){
        cout << Name << " is preparing " << Subject << " lesson." << endl;
    }
    /*Polymorphism - principle according to which function can have the same name,
    but different realization in many classes. In our case such a function
    is "work" method*/

    void work() override{
        cout << Name << " is teaching " << Subject << "." << endl;
    }
};

int main(){
    Developer d("Amy", "Google", 24, "Python");
    Teacher t("Jacob", "Cool School", 42, "History");

    /*pointer of parent class can keep address of chils class' object*/

    Employee* e1 = &d;
    Employee* e2 = &t;

    e1->work();
    e2->work();

    return 0;
}