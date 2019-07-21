#include <iostream>

using namespace std;


class Base{
    int x;
    public:
        void setx(int x){
            this->x = x;
        }
        int getx(){
            return x;
        }
};

class Derived : public Base{
    int y;
    public:
        void sety(int y){
            this->y = y;
        }

        int gety(){
            return y;
        }
};


int main()
{
    Base *p;// pointer to base type

    Base base_object; // object of base
    Derived derived_object;
    Base secondBaseObj;


    //use p to access the base object

    p = &base_object;
    p->setx(10);
    cout << "Base object value of x: "<< p->getx()<<endl;
    base_object.setx(100);
    cout << "Base object value of x: "<< p->getx()<<endl;

    p->setx(20);
    cout << "Base object value of x: "<< base_object.getx()<<endl;




    p = &derived_object;
    derived_object.sety(15);
    //cout << "Derived object value of y: "<< p->gety()<<endl;
    //although base pointer can be used to point a derived object, you can access only those members
    // of the derived object that are inherited from the base class;


    p = p+1;
    secondBaseObj.setx(30);
    cout << "SecBase object value of x: "<< p->getx()<<endl;

    return 0;
}
