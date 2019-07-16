#include <iostream>

using namespace std;

class Person{
private:
    int age;
public:
    void introduce(){
        cout<< "hi i am a person "<<endl;
    }

    void setAge(int age){
        //age = a;
        this->age = age ;
    }
    void displayAge(){
        cout<< this->age <<endl;
    }
};



class Student : public Person{
public:
    void introduce(){
        cout<< "hi i am student"<<endl;
    }
};


void whoIsThis(Person p){
    p.introduce();
}



int main()
{
    Student anil;
    anil.introduce(); // method by student class is called
    // method in base class is overwritten by derived class

    anil.Person::introduce();


    Person sunil;
    sunil.setAge(24);
    sunil.displayAge();
    cout<<"Calling methods using base class type"<<endl;
    Student banil;
    banil.introduce();
    whoIsThis(banil);



    return 0;
}
