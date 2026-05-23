#include<bits/stdc++.h>
using namespace std;

bool checkDuplicates(vector<int>& nums){
    sort(nums.begin(),nums.end());
    for(int i=1;i<nums.size();i++){
        if(nums[i]==nums[i-1]) return true;
    }
    return false;
}

int main(){
    vector<int> nums = {1,5,2,3,4};
    cout<<checkDuplicates(nums);
}