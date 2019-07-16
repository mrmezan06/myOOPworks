#include <iostream>

using namespace std;
//base class
class Person{
public:
    string name;
    int age;

    void setName(string iname){
        name = iname;
    }
    void setAge(int a){
        age = a;
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
        cout<< "Hi I am: "<< name<<" and my age is: "<<age<<endl;
        cout<< "My ID number is: "<< id<<endl;
    }
};


int main()
{
    Student anil;
    anil.setName("Anil");
    anil.setAge(25);
    anil.setId(1001);
    anil.introduce();
    return 0;
}
