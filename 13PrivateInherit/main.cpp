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
class Student : private Person{ // public inheritance
public:
    int id;
    void setId(int i){
        id = i;
    }
    void introduce(){
        cout<< "Hi I am: "<< name<<endl;
        cout<< "My ID number is: "<< id<<endl;
    }

    void setPersonName(string s){
        setName(s);
    }
};




int main()
{
    Student anil;

    /* protected member of base class can only be
        accessed by the base class and the derived class.
    */

    /* In private inheritance the members of the base class will act as
    private member in the derived class
    */
    //anil.setName("Anil"); //setName is private for a Student object

    anil.setPersonName("Anil Kumble");
    anil.setId(1001);
    anil.introduce();
    return 0;
}
