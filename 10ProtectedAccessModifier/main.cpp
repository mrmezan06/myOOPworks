#include <iostream>

using namespace std;
//base class
class Person{
protected:
/*
members and memberfuncitons are available in that class and it can be accessed
and also can be accessed in the subclasses which inherits this class
*/
    string name;

public:
    void setName(string iname){
        name = iname;
    }

};
// Student is subclass. Subclass inherits from base class
class Student : public Person{
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
    anil.setName("Anil");
    Person fPerson;
    //fPerson.name = "Snk";
    // above line will cause an error reason is described above
    anil.setId(1001);
    anil.introduce();
    return 0;
}
