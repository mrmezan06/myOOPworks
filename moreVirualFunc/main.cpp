#include <iostream>

using namespace std;


class Area{
    double d1, d2;
public:
    Area(){
    }
    void setarea(double d1, double d2){
        this->d1 = d1;
        this->d2 = d2;
    }
    void getval(double &done ,double &dtwo){
        done = d1;
        dtwo = d2;
    }
    virtual double getarea(){
        cout << "GG"<<endl;
        return 0;
    }



};

class Rectangle : public Area{
public:

    Rectangle(){
    }
    double getarea(){
        double d1, d2;
        getval(d1, d2);
        return d1*d2 ;
    }

};

class Triangle : public Area{
public:
    Triangle(){
    }
    double getarea(){
        double d1, d2;
        getval(d1, d2);
        return d1*d2 ;
    }


};




int main()
{
    Area *p;
    Rectangle rectangle;
    Triangle triangle;

    rectangle.setarea(3.3 , 4.5);
    triangle.setarea(4.0 , 5.0);

    p = &rectangle;
    cout << "rectangle has an area "<< p->getarea()<<endl;

    p = &triangle;
    cout << "triangel has an area "<< p->getarea()<<endl;

    return 0;
}
