#include <iostream>

using namespace std;

class List{
public:
    List *head;
    List *tail;
    List *next;

    int num;
    List(){
        head = tail = next = NULL;
    }

    virtual void store(int i) = 0; // pure virtual function
    virtual int retrieve() = 0; // pure virtual function
};


class Queue : public List{
public:
    void store(int i);
    int retrieve();
};

void Queue :: store(int i){
    List  *item;
    item = new Queue;


    item->num = i;


    if(tail){
        tail->next = item;
    }

    tail = item;
    item->next = NULL;

    if(!head){
        head = tail;

    }


}




int Queue::retrieve(){
    int i;
    List *p;

    if(!head){
        cout << "List is empty "<<endl;
        return 0;
    }

    i = head->num;
    p = head;
    head = head->next;
    delete p;
    return i;
}


int main()
{
    List *p;
    Queue qObj;
    p = &qObj;

    p->store(1);
    p->store(2);
    p->store(3);

    cout<< "queue: ";
    cout << p->retrieve()<<endl;
    cout << p->retrieve()<<endl;
    cout << p->retrieve()<<endl;

    return 0;
}
