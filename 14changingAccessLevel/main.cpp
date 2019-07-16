#include <iostream>

using namespace std;
//base class
class Person{
protected:
    string name;

public:
    void setName(string iname){
        name = iname;
    }

};
// Student is subclass. Subclass inherits from base class
class Student : private Person{ // private inheritance
public:

    Person ::name;
    //for above line of code name became public member of Student class

    void display(){
        cout << name <<endl;
    }

    void setPersonName(string s){
        setName(s);
    }
};




int main()
{
    Student anil;
    anil.name = "Anil";
    anil.display();
    return 0;
}
