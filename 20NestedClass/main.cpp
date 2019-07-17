#include <iostream>

using namespace std;



class Person{
public:
    string name;
    class Address{
        public:
        string country;
        string stname;

    };

    Address addr;
    void AddressPlease(){
        cout << "name: "<< name <<endl;
        cout << addr.country << endl<< addr.stname;
    }

};



int main()
{
    Person anil;

    anil.name = "Anil";
    anil.addr.country = "India";
    anil.addr.stname= "stName";

    anil.AddressPlease();

    Person :: Address ad;
    return 0;
}
