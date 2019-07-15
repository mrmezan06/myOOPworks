#include <iostream>

using namespace std;

class HumanBeing{

//access specifier
public:
    string name;
    void display(){
        cout<< "My name is "<<name<<endl;
    }

};

class Box{
    public:
        Box(){
            cout<< "constructor called" <<endl;
        }

        ~Box(){
            cout<< "Destructor called" <<endl;

        }
        /* destructor will be executed when an object under
        that class will release its allocated space.
        */
};

int main()
{
    HumanBeing anil; // objects stored in the stack

    anil.name = "Anil";
    anil.display();

    HumanBeing anjali;
    anjali.name = "Anjali";
    anjali.display();

    // new keyword object will be allocated at heap and it will be dynamic
    HumanBeing *bunty = new HumanBeing();
    bunty->name = "Bunty";
    bunty->display();
    //bunty is a pointer to an object of type HumaBeing
    bunty.display();
    (*bunty).display();
    // array of Objects
    Box* BoxArray = new Box[4];
    delete [] BoxArray;

    return 0;

}
