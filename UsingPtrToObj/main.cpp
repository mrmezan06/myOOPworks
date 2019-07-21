#include <iostream>

using namespace std;

class Samp{
    int a, b;
    public:
        Samp(int n, int m){
            a = n;
            b = m;
        }
        int get_a(){
            return a;
        }

        int get_b(){
            return b;
        }

};

class Sample{
    public:
        int a =10;
        int get_a_square(){
            return a*a;
        }
};

int main()
{
    Samp ob[4] = {
        Samp(1,2),
        Samp(3,4),
        Samp(5,6),
        Samp(7,8)
    };
    int i;
    Samp *p;
    p = ob;// get starting address of array
    for(i = 0 ; i < 4; i++){
        cout << p->get_a()<<" "<< p->get_b()<<endl;
        p++;
    }

    Sample *s;
    s = new Sample; // new returns apointer to dynamic allocated memory
    cout << "square: "<<s->get_a_square()<<endl;
    delete s;

    Sample *ss;
    Sample base_obj;
    ss = &base_obj;
    cout << "square: "<<ss->get_a_square()<<endl;



    return 0;
}
