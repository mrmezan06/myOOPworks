#include <iostream>

using namespace std;

class Animal{
public:
    int age;

    Animal(){
        cout<<"animal constructor called"<<endl;
    }

    void walk(){
        cout<<"animal walks"<<endl;
    }
};

class Lion : virtual public Animal{
public:
    Lion(){
        cout<<"Lion constructor called"<<endl;
    }

};

class Tiger : virtual public Animal{
public:
    Tiger(){
        cout<<"liger constructor called"<<endl;
    }
};

class Liger : public Lion, public Tiger{
public:
    Liger(){
        cout << "Liger constructor called"<<endl;
    }
};

int main()
{
    Liger anil;
    //anil.walk();
    /* object of Liger class do not know from where to call
     the walk mehtod. From Tiger class or from Lion class.
     to solve this ambiguity, virtual keyword during inheritance
    */

    anil.walk();
    return 0;
}
