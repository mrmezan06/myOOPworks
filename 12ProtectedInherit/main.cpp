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
class Student : protected Person{ // protected inheritance
public:
    int id;
    void setId(int i){
        id = i;
    }
    void introduce(){
        cout<< "Hi I am: "<< name<<endl;
        cout<< "My ID number is: "<< id<<endl;
    }
    void setStudentName(string aName){
        setName(aName);
    }

};


int main()
{
    Student anil;

    /* In protected inheritance protected and public members of the base class
        are protected in the subclasses. Thus above line will cause
        an error.
    */
    //anil.setName("Anil"); setName() is protected for Student type subclass object as protected inheritance
    Person person;
    person.setName("Sunil"); // setName() is public for Person class type objects because it is publicly defined

    anil.setStudentName("Latif");
    anil.setId(1001);
    anil.introduce();
    return 0;
}
