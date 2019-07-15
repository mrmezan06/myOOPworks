#include <iostream>

using namespace std;

class Human{
private://private members and variable can only be accessed from that class only
    int age;
public:

    Human(){// called when an object is created
        cout<< "constructor called"<<endl;
    }
    void displayAge(){
        cout<< "Age: "<< age << endl;
    }
    void setAge(int ageValue){
        age = ageValue;
    }

};

int main()
{
    Human anil;
    //anil.age = 25; - this will give error because age is private member
    // we can access it through public member function
    anil.setAge(10);
    anil.displayAge();


    return 0;
}
