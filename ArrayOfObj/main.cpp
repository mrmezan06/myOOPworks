#include <iostream>

using namespace std;

class Samp{
    int a;
    public:
        Samp(){

        }
        void set_a(int a){
            this->a =a;
        }
        int get_a(){
            return a;
        }
};

class Sap{
    int a;
    public:
        Sap(){

        }
        void set_a(int a){
            this->a =a;
        }
        int get_a(){
            return a;
        }
};


class Sample{
    int a ,b;
    public:
        Sample(){

        }
        void set_a(int a, int b){
            this->a =a;
            this->b = b;
        }
        int get_sum(){
            return a+b;
        }
};



int main()
{
    Samp obj[4];
    int i;

    for(int i=0; i<4; i++){
        obj[i].set_a(i);
    }

    for(int i=0; i<4; i++){
        cout << obj[i].get_a()<<endl;
    }

    Sap ob[2][2];
    int val = 0;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            ob[i][j].set_a(val++);
        }
    }

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout << ob[i][j].get_a()<< " ";
        }
        cout <<endl;
    }


    Sample obc[2][2];
    int aval =1;
    int bval = 100;

    for(int i = 0; i<2; i++){
        for(int j=0; j<2; j++){
            obc[i][j].set_a(aval++ , bval);
        }
    }
    for(int i = 0; i<2; i++){
        for(int j=0; j<2; j++){
            cout << obc[i][j].get_sum()<< "  ";
        }
        cout << endl;
    }


    return 0;

}
