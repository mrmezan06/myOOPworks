#include <iostream>

using namespace std;

class Sample{
    int a, b;
    public:
        Sample(int m , int n){
            a = m;
            b = n;
        }
        ~Sample(){
            cout << "Destructor called"<<endl;
        }

        int getSum(){
            return a+b;
        }
};

class Smpl{
int val;
public:
    Smpl(){
    }
    ~Smpl(){
        cout << "destructor called"<<endl;
    }
    void setVal(int a){
        val = a;
    }
    int getVal(){
        return val;
    }

};


int main()
{
    // example -1 :
    int *p;
    p = new int(9);
    cout << *p<<endl;

    *p =10;
    cout << *p<<endl;
    delete p;

    // example - 2
    Sample *s;
    s = new Sample(6,10);
    cout << "Sum: "<< s->getSum()<<endl;
    delete s;

    // exaple - 3
    int *q;
    q = new int [10];
    for(int i=0 ; i<10; i++){
        q[i] = i;
        cout << q[i]<<" ";
    }
    cout << endl;
    delete [] q;

    // example - 4
     Smpl *sp;
     sp = new Smpl [5];
     for(int i=0 ; i<5 ; i++){
        sp[i].setVal(i+10);
        cout << sp[i].getVal() << "  ";
     }

     delete [] sp;



    return 0;
}
