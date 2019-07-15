#include <iostream>

using namespace std;

void display();


class Human{

public:
    static int human_count;
    Human(){
        human_count++;
        cout<< "default constructor"<<endl;
    }

    void humanTotal(){
        cout<< "there are: "<< human_count<<" peoples in this program"<<endl;
    }

};

int Human ::human_count = 0;




int main()
{
    cout<< Human::human_count<<endl;
    Human anil;
    anil.humanTotal();

    Human banil;
    banil.humanTotal();


    display();
    display();
    display();


    return 0;
}

void display(){
    static int counter = 0; // this line will be executed only once
    //counter will be stored in the heap
    cout << "display func called: "<< ++counter<<endl;
}
