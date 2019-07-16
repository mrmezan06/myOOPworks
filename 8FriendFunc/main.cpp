#include <iostream>

using namespace std;



class Human{
    string name;
    int age;
public:
    Human(string s, int a){
        name = s;
        age = a;
    }

/*
 if we want to use the private variables without using memberfunction
 of that class then we can use friend function

*/
friend void display(Human man);

};


void display(Human man){
    cout<< man.name <<" "<< man.age<<endl;
}


int main()
{
    Human anil("Anil", 25);

    display(anil);

    return 0;
}
