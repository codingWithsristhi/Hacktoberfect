#include<iostream>
using namespace std;

class Rectangle
{
public:
    int length;
    int breadth;

    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
};


int main(){
    Rectangle r;// It is in Stack 
    Rectangle *p=new Rectangle(); //It is in Heap
    Rectangle *q;
    q=&r;//It is in stack;

    Rectangle *s;
    s=new Rectangle();//It is in Heap

    //Stack
    r.length=10;
    r.breadth=5;
    cout<<r.area()<<endl;

    q->length=100;
    q->breadth=5;
    cout<<q->area()<<endl;

    //Heap
    p->length=1000;
    p->breadth=5;
    cout<<p->area()<<endl;

    s->length=10000;
    s->breadth=5;
    cout<<s->area()<<endl;



}


