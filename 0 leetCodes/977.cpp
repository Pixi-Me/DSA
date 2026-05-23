#include<bits/stdc++.h>
using namespace std;

vector<int> squaredSort(vector<int>& nums){
    for(int i=0;i<nums.size();i++){
        nums[i]*=nums[i];
    }
    sort(nums.begin(),nums.end());
    return nums;
}

int main(){
    vector<int> nums = {1,0,-4,6,3,-2};
    squaredSort(nums);
    for(auto i :nums){
        cout<<i<<" ";
    }
}