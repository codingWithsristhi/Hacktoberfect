#include<iostream>
#include<vector>
using namespace std;

int firstMissingPositive(vector<int>& nums) {

    int i=0;
    while(i<nums.size()){
        int correctIndex=nums[i]-1;
        if(nums[i]>=1 && nums[i]<=nums.size() && nums[i]!=nums[correctIndex]  ){
            swap(nums[i],nums[correctIndex]);
        }
        else{
            i++;
        }
    }
    
    for(int i=0;i<nums.size();i++){
        if(nums[i]-1!=i){
            return i+1;
        }
    }
    return nums.size()+1;
}
int main(){

    vector<int> v{1,2,0};
    cout<<firstMissingPositive(v);

    return 0;
}