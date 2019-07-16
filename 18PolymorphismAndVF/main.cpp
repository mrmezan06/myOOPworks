#include <iostream>

using namespace std;

class Person{
private:
    int age;
public:

    virtual void introduce(){
        cout<< "hi i am a person "<<endl;
    }

    virtual void intro() = 0; // pure virtual func
    // the intro function must be defined in every derived classes

};



class Student : public Person{
public:
    void introduce(){
        cout<< "hi i am student"<<endl;
    }

    void intro(){
        cout<< "hello S"<<endl;
    }
};

class Farmer: public Person{
public:
    void introduce(){
        cout<< "hi i am farmer"<<endl;
    }

    void intro(){
        cout<< "hello P"<<endl;
    }

};


void whoIsThis(Person &p){
    p.introduce();
}



int main()
{

    Farmer anil;
    Student alex;
    whoIsThis(anil);
    whoIsThis(alex);
    cout<<"another way: "<<endl;
    Person *aPerson = &anil;
    Person *bPerson = &alex;
    aPerson->introduce();
    bPerson->introduce();
    aPerson -> intro();




    return 0;
}
