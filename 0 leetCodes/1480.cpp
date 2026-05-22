//1480. Running Sum of 1d Array
#include<bits/stdc++.h>
using namespace std;

vector<int> runningSum(vector<int>& nums){
    vector<int> ans;
    for(int i=0;i<nums.size();i++){
        int sum=0;
        for(int y=i;y>=0;y--){
            sum+=nums[y];
        }
        ans.emplace_back(sum);
    }
    return ans;
}

int main(){
    vector<int> nums = {1,2,3,4};
    runningSum(nums);
    return 0;
}