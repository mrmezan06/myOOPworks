#include <iostream>

using namespace std;

class Human{
private:
    int *age;
    string *name;

public:
    Human(string n, int a){
        name = new string;
        age = new int;

        *name = n;
        *age = a;
        //age = 5;
        //name = "no name";
        cout<< "default constructor called"<<endl;
    }

    ~Human(){
        delete name;
        delete age;
        cout << "destructor called"<<endl;
    }

    void display(){
        cout<< "Name: "<< *name<< " ,Age: "<< *age<<endl;
    }

};


int main()
{
    //Human anil;
    Human *anil;
    anil = new Human("Anil", 25);
    anil->display();
    delete anil; // without delete the object is not destroyed


    return 0;
}
