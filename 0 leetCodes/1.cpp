#include<bits/stdc++.h>
using namespace std;\

vector<int> twoSum(vector<int>& nums,int target){
    vector<int> ans;    
    for(int i=0;i<nums.size();i++){
        for(int y=i+1;y<nums.size();y++){
            if(nums[i]+nums[y]==target){
                
                ans.emplace_back(i);
                ans.emplace_back(y);
                
            } 
        }
    }
    return ans;
}
int main(){
    vector<int> nums = {2,7,11,15};
    vector<int> x = twoSum(nums, 17);
    for(auto i : x){
        cout<<i<<" ";
    }
}