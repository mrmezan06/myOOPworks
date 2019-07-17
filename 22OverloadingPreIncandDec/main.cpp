#include <iostream>

using namespace std;

class Marks{
int mark;
public:
    Marks(){
        mark = 0;
    }
    Marks(int i){
        mark = i;
    }

    void display(){
        cout<< mark<<endl;
    }

    void operator ++ (){
        mark += 1;
    }
    friend void operator -- (Marks &currentObj);

};

void operator --(Marks &currentObj){
    currentObj.mark -=1;
}






int main()
{

    Marks anilsmark(60);
    ++anilsmark;
    ++anilsmark;
    anilsmark.display();
    --anilsmark;
    anilsmark.display();




    return 0;
}
