#include <iostream>
using namespace std;
int main(){

    int array[10];
    int sum=0;
    for(int x:array){
        printf("Enter value of number ");
        cin>>x;
        sum+=x;
        }
    printf("\nOverall sum is %d ",sum);
     return 0;
}