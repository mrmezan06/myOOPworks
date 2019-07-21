#include <iostream>

using namespace std;
int x;
int &f(){
    return x; // returns a reference to x
}

class Arra{
    int araSize;
    char *pp;
    public:

        Arra(int n){
            pp = new char [n];
            araSize = n;
            if(!pp){
                cout << "Allocation error"<<endl;
                exit(1);
            }




        }

        ~Arra(){
            delete [] pp;
        }

        char &put(int i){
            if( i <0 || i>=araSize){
                cout << "bound error"<<endl;
                exit(1);
            }

            return pp[i]; // return a reference to p[i];

        }

        char get(int i);

};

char Arra :: get(int i){
    if( i <0 || i>=araSize){
        cout << "bound error"<<endl;
        exit(1);
    }

    return pp[i]; // return a character. see the returntype
}






int main()
{
    f() = 100;
    cout << x <<endl;



    Arra a(10);
    a.put(3) = 'X';
    a.put(2) = 'R';

    cout <<a.get(3)<<endl;
    return 0;
}
