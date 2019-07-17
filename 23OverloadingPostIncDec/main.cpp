#include <iostream>

using namespace std;

class Marks{
int mark;
public:
    Marks(){
        mark = 0;
    }
    Marks(int i){
        mark = i;
    }

    void display(){
        cout<< mark<<endl;
    }

    Marks operator ++ (int){
        Marks duplicate(*this);
        mark += 1;
        return duplicate;

    }
    friend Marks operator -- (Marks &currentObj, int);

};

Marks operator --(Marks &currentObj, int){
    Marks duplicate(currentObj);
    currentObj.mark -= 1;
    return duplicate;
}



int main()
{

    Marks anilsmark(60);
    anilsmark.display();
    (anilsmark++).display();
    anilsmark.display();

    (anilsmark--).display();
    anilsmark.display();




    return 0;
}
