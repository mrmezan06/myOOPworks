#include <iostream>

using namespace std;

class Marks{
int marks;
public:
    Marks(int m){
        cout<< "constructor called"<<endl;
        marks = m;
    }

    void whatsyourmark(){
        cout<<marks<<endl;
    }
    Marks operator ()(int mk){
        cout << "operator func called"<<endl;
        marks = mk;
        return *this;
    }

    Marks *operator -> (){
        cout<<"exec"<<endl;
        return this;
    }


};


int main()
{   // -> class member access operator
    // [] () ->
    //note: they must be non static member function and
    // they can not be friend. we can not use friend func to overload

    //? :: . * . cannot be overloaded
    // except = operator all other operator functions are inherited by the derived class

    Marks anilsmark(65);
    anilsmark.whatsyourmark();
    anilsmark->whatsyourmark();

}
