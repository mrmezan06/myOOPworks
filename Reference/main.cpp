#include <iostream>

using namespace std;


void func(int *p){ // use a pointer as ap parameter
    *p = 100;

}
void fun(int &p){ // declare a reference parameter.
    p = 200;
}

int main()
{
    /* Three ways: First, a ref can be passed to a function
        Second, a ref can be returned by a function.
        Finally, an independent ref can be created.

    */


    int x = 10;
    func(&x);
    cout << "X: "<< x<<endl;

    int y = 20;
    fun(y);
    cout << "Y: "<< y << endl;


    return 0;
}
