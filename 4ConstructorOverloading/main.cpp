#include <iostream>

using namespace std;

class Human{
private:
    int age;
    string name;
public:
    Human(){
        age = 5;
        name = "no name";
        cout<< "default constructor"<<endl;
    }

    Human(string s){
        age = 5;
        name = s;
        cout << "constructor with string as parameter"<<endl;
    }

    Human(int a){
        age = a;
        name = "no Name";
        cout << "constructor with int as parameter"<<endl;
    }
};


int main()
{
    Human anil;
    Human sanil(5);
    Human janil("noName");
    return 0;
}
