#include<iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
public:
    //Non-parameterized Constructor
    // Rectangle(){
    //     length=1;
    //     breadth=1;
    // }
    // Parameterized Constructor
    // Rectangle(int l,int b){
    //     setLength(l);
    //     setBreadth(b);
    // }
    //Constructor Overloading
    Rectangle(int l=1,int b=1){
        breadth=b;
        length=l;
    }
    //Copy Constructor
    // Rectangle(Rectangle &r){
    //     length=r.length;
    //     breadth=r.breadth;
    // }

    //Mutator
    void setLength(int l){
        if(l<0) length=1;
        else length=l;
    }
    void setBreadth(int b){
        if(b<0) breadth =0;
        else breadth=b;
    }
    //Accessor
    int getLength(){return length;}
    int getbreadth(){return breadth;}
    
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
};

int main(){
    Rectangle r(10,9);

    cout<<r.area();

}

