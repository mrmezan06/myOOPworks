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
class Student : public Person{ // public inheritance
public:
    int id;
    void setId(int i){
        id = i;
    }
    void introduce(){
        cout<< "Hi I am: "<< name<<endl;
        cout<< "My ID number is: "<< id<<endl;
    }
};


int main()
{
    Student anil;
    //anil.name = "Anil";
    /* In public inheritance protected and public members of the base class
        are protected and public respectively in the subclasses. Thus above line will cause
        an error.
    */
    anil.setName("Anil");
    anil.setId(1001);
    anil.introduce();
    return 0;
}
