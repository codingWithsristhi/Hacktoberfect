#include<bits/stdc++.h>
using namespace std;

void Merge(int A[],int l,int mid,int h){
    
    int B[h+1];
    int i=l,j=mid+1,k=l;

    while(i<=mid && j<=h){
        if(A[i]<A[j]){
            B[k++]=A[i++];
        }
        else{
            B[k++]=A[j++];
        }
    }

    for(;i<=mid;i++){
        B[k++]=A[i];
    }
    for(;j<=h;j++){
        B[k++]=A[j];
    }

    for(int i=l;i<=h;i++){
        A[i]=B[i];
    }
}

void MergeSort(int A[],int l,int h){
    if(l<h){
        int mid=(l+h)/2;
        MergeSort(A,l,mid);
        MergeSort(A,mid+1,h);
        Merge(A,l,mid,h);
    }
}


int main(){

    int A[]={8,2,9,6,5,3,7,4};
    int l=0;
    int h=7;
    MergeSort(A,l,h);

    for(int i:A){
        cout<<i<<" ";
    }

    return 0;
}