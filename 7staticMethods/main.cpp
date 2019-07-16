#include <iostream>

using namespace std;

void display();


class Human{

public:
    static int human_count;
    //int age = 5;
    Human(){
        human_count++;
        cout<< "default constructor"<<endl;
    }

    void humanTotal(){
        cout<< "there are: "<< human_count<<" peoples in this program"<<endl;
    }

    // this method will be shared by all objects
    static void humanCount(){
        cout<< "THERE are: "<< human_count<<" peoples in this program"<<endl;
// only use static members and variables;
        //cout<< "THERE are: "<< age <<" peoples in this program"<<endl;

    }

};

int Human ::human_count = 0;
//int Human ::age = 5;




int main()
{
    cout<< Human::human_count<<endl;
    Human anil;
    anil.humanTotal();

    Human banil;
    banil.humanTotal();

    Human::humanCount();





    return 0;
}


