#include <iostream>

using namespace std;


class Base{
public:
    int i;
    Base(int x){
        i = x;
    }

    virtual void func();
};

void Base :: func(){
    cout << "Using Base func() "<< i <<endl;
}


class DerivedOne : public Base{
public:

    DerivedOne(int x):Base(x){
        //Base(x);
    }
 //   void func(){
   //     cout << "Using DerivedOne func() "<< i*i <<endl;
    //}
};


class DerivedTwo : public Base{
public:
    DerivedTwo(int x): Base(x){
        //Base(x);
    }
    void func(){
        cout << "Using DerivedTwo func() "<< i+i <<endl;
    }
};
int main()
{
    Base *b;

    Base base_object(10);
    DerivedOne derivedone(20);
    DerivedTwo derivedtwo(30);


    b = &base_object;
    b->func();

    b = &derivedone;
    b->func();

    b = &derivedtwo;
    b->func();

    return 0;
}
