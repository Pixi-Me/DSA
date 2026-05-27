#include<bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums){
    int zeroIndex;
    bool isZero=false;
    int nonZeroIndex;
    bool isNonZero =false;
    for(int i=0;i<nums.size();i++){
       if(nums[i]==0 && isZero==false){
        zeroIndex=i;
        isZero=true;
       } 
       else if(i>zeroIndex && isZero==true && nums[i]!=0){
        swap(nums[i],nums[zeroIndex]);
        i = zeroIndex;
        isZero =false;
       }
    }
}

int main(){
    vector<int> nums =  {2,0,0,0,3,4,4,0};
    moveZeroes(nums);
    for(auto i :nums){
        cout<<i<<" ";                                           
    }
    return 0;
}