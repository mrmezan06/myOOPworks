#include <iostream>

using namespace std;

class Marks{
int intmark;
int extmark;
public:
    Marks(){
        intmark = 0;
        extmark = 0;
    }
    Marks(int i, int m){
        intmark = i;
        extmark = m;
    }

    void display(){
    cout << intmark <<endl << extmark <<endl;
    }


    Marks operator + (Marks m){
        Marks temp;
        temp.intmark = intmark + m.intmark;
        temp.extmark = extmark + m.extmark;
        cout << " ext: "<< m.extmark<<endl;
        return temp;
    }


    Marks operator - (Marks m);

};
//return type - class :: operator sign ()
Marks Marks :: operator - (Marks m){
    Marks temp;
    temp.intmark = intmark - m.intmark;
    temp.extmark = extmark - m.extmark;
    cout << " Negext: "<< m.extmark<<endl;
    return temp;
}

class Point{
public:
    int point;
    Point(){
        point = 0;
    }
    void operator += (int m){
         point += m;
    }
    void displayPoint(){
        cout<< "Point: "<< point <<endl;
    }
    friend void operator -=(Point &currentObj, int p);

};

void operator -= (Point &currentObj, int p){
    currentObj.point -= p;
}



int main()
{
    Marks m1(10,20);
    Marks m2(30,40);
    Marks m3 (50,60);

    Marks m4 = m1 + m2 + m3;
    m4.display();

    Marks m5 = m3 - m1;
    m5.display();

    Point p1;
    p1 += 10;
    p1.displayPoint();

    p1 -= 5;
    p1.displayPoint();

    return 0;
}
