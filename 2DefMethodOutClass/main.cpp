#include <iostream>

using namespace std;

class Human{
    public:
        string name = "No name";
        void introduce();
};

//string Human::name = "no name"
//it will cause an error
// string Human::name is not a static member of class Human

void Human ::introduce(){
    cout << Human ::name <<endl;
    cout << "Name: "<<name<<endl;
}

int main()
{
    Human anil;
    anil.name = "Anil";
    anil.introduce();

    Human banil;
    banil.introduce();
}
