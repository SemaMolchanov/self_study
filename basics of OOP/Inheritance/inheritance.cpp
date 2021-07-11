#include <iostream>

using namespace std;

/*наследование*/


/*в данном примере все модификаторы доступа при наследовании
будут public для простоты*/

/*простейшее одиночно наследование - ситуация когда на основе одного класса,
сохраняя его поля и методы, создаются другие классы, в которых помимо полей и методов
исходного класса имеются свои поля и методы, которые отличают полученные классы от исходного
и друг от друга*/

/*наследование имеет специфический синтаксис и множество тонокостей, которые зависят от типа
наследования, модификаторов доступа и т .д*/

/*плюс наследования в том, что для классов, имеющих похожий функционал, не нужно
несколько раз прописывать один и тот же код, который реализует этот функционал*/

/*класс, от которого наследуют - базовый (родительский) класс*/

/*классы, полученные в результате наследования - производные (дочерние) классы,
либо просто - наследники*/

class human{
private:
    string name;
public:
    void set_name(string name){
        this->name = name;
    }
    string get_name(){
        return name;
    }
};

class professor : public human{
private:
    string subject;
public:
    void print(){
        cout << "nice job, guys" << endl;
    }
};

class student : public human{
private:
    string specialty;
public:
    void study(){
        cout << "I study and I attend university" << endl;
    }
};

class extramural_student : public student{
public:
    void study(){
        cout << "I study, but I don't attend university" << endl;
    }
};

/*классы student и professor унаследованны от класса*/
/*класс extramural_student унаследован от класса student*/
/*цепочки наследования:
1. human->professor
2. human->student->extramural_student
*/


int main(){

    /*классам professor и student, наследованным от класса human,
    доступны всего его public методы, хоть в этих двух классах
    они явно не прописаны*/

    /*классу extramural_student доступны все public поля и методы
    классов human и student, являющихся его предшественниками в 
    цепочке наследовния*/

    /*метод study в классах student и extramural_student работает
    по-разному, потому что в классе extramural_student он тоже определен,
    как и в классе student, но определен по-другому*/


    student st;
    st.set_name("Alexey");
    extramural_student extra_st;
    extra_st.set_name("Anton");
    professor pr;
    pr.set_name("Ivan Vasilievich");


    cout << st.get_name() << " do you study?" << endl;
    st.study();
    cout << extra_st.get_name() << ", what about you?" << endl;
    extra_st.study();
    cout << "professor " << pr.get_name() << ", what do you think?" << endl;
    pr.print();
    return 0;
}