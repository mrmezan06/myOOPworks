#include <iostream>

using namespace std;

class Father{
public:
    int height;

};


class Mother{
public:
    string skinColor;

};


class Child : public Father, public Mother{
public:
    void askParents(){
        cout<< "am asking my parents: "<<endl;
    }

    void setColorandHeight(string iColor, int iHeight){
        skinColor = iColor;
        height = iHeight;
    }

    void display(){
        cout<< "Height: "<< height<<" Skin Color: "<<skinColor<<endl;
    }

};

int main()
{
    Child anil;
    anil.setColorandHeight("White", 6);
    anil.display();
    return 0;
}
