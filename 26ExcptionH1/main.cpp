#include <iostream>

using namespace std;

int main()
{

    int a = 10;
    int b= 0;

    try{
        if(b==0){
            throw runtime_error("divided by zero error");

        }
        int c = a/b;
        cout <<c <<endl;
    }catch(runtime_error &e){
        cout << "exception occured"<<endl;
        cout << e.what();
    }

    try{
        //throw "some exception";
        //throw 20;
        throw runtime_error("runtime error");

    }catch(const char *e){
        cout << e <<endl;
    }catch(int error){
        cout << error <<endl;
    }catch(runtime_error e){
        cout << e.what()<<endl;
    }

    try{
        //throw 20;
        throw runtime_error("ffg");

    }catch(int e){
        cout <<"int error"<<endl;
    }catch(...){
        cout << "handles all the exception"<<endl;
    }



    return 0;
}
