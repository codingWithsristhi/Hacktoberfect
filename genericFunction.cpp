#include<iostream>

using namespace std;

template<class T>
T max89(T x,T y){
    return x>y?x:y;
}

int main(){
    int ma=max89(4,5);
    cout<<ma;

}
