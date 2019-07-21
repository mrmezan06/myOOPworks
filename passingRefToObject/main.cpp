#include <iostream>

using namespace std;

class MyClass{
    int who;
    public:
        MyClass(int n){
            who = n;
            cout << "Constructor of MyClass called"<< endl;
        }

        ~MyClass(){
            cout << "Destructor of MyClass called"<< endl;
        }

        int id(){
            return who;
        }
};

class MyClassTest{
    int who;
    public:
        MyClassTest(int n){
            who = n;
            cout << "Constructor of MyClassTest called"<< endl;
        }

        ~MyClassTest(){
            cout << "Destructor of MyClassTest called"<< endl;
        }

        int id(){
            return who;
        }
};



void aFunction(MyClass myclass){
    cout << "aFunction myclass: "<< myclass.id() <<endl;
    //destructor will be called twice because a copy of that object is made in the call-by-value parameter
}

void bFunction(MyClassTest &m){
    cout << "bFunction myclasstest: "<< m.id() <<endl;
    //destructor will be called once because of reference parameter:
}

int main()
{
    MyClass myclass(10);

    aFunction(myclass);

    MyClassTest myclasstest(20);
    bFunction(myclasstest);
    return 0;
}
