#include <iostream>

using namespace std;

class Marks{
int subjects[3];
public:
    Marks(int s1, int s2, int s3){
        subjects[0] = s1;
        subjects[1] = s2;
        subjects[2] = s3;
    }
    int operator [](int index){
        return subjects[index];
    }


};


int main()
{
    // [] () ->
    //note: they must be non static member function and
    // they can not be friend. we can not use friend func to overload

    Marks anil(24,22,32);

    cout << anil[0]<<endl;
    cout << anil[1]<<endl;
    cout << anil[2]<<endl;

    return 0;
}
