#include<bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums){
    for(auto i=nums.begin();i<=nums.begin()+nums.size();i++){
        if(*i==0){
            nums.emplace_back(0);
            nums.erase(i);
            i--;
        }
    }
}

int main(){
    vector<int> nums =  {2,3,4,4,0};
    moveZeroes(nums);
    for(auto i :nums){
        cout<<i<<" ";
    }
    return 0;
}