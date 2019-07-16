#include <iostream>

using namespace std;

class Father{
    protected:
        int height;
    public:
        Father(int h){
            height = h;
            cout<< "constructor of father class is called "<<endl;
        }
};

class Mother{
    protected:
        string skinColor;
    public:
        Mother(string s){
            skinColor = s;
            cout<< "constructor of mother class is called "<<endl;
        }
};


class Child : Father{
    public:
        Child(int x) : Father(x){
            cout<<"constructor of child class called"<<endl;
        }

        void displayHeight(){
            cout<<" height is: "<< height<<endl;
        }
};


class AnotherChild : public Father, public Mother{
    public:
        AnotherChild(string s, int x) : Mother(s), Father(x){
            cout<<"constructor of anotherchild class called"<<endl;
        }

        void displayHeightandSkinCol(){
            cout<<" height is: "<< height;
            cout<<" skin color is: "<< skinColor<<endl;
        }
};


int main()
{
    Child anil(24);
    anil.displayHeight();

    AnotherChild sunil("White", 24);
    sunil.displayHeightandSkinCol();


    return 0;
}
