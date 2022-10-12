#include<iostream>
using namespace std;
class Harshil{
    private:
        String name;
        int wheels;
    public:
        void setName(string na){
         this->name=na;
        }
        void setWheels(int whe){
            this->wheels=whe;
        }
        string getName(){
            return name;
        }
        int getWheels(){
            return wheels;
        }
        string tellTheDetails(){
            return "Car Name is"+name+"and wheels is"+wheels.to_String()
        }



};