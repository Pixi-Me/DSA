#include<bits/stdc++.h>
using namespace std;

int findGCD(vector<int>& nums) {
        int min = nums[0];
        int max = nums[0];
        for(auto x : nums){
            if(x>max) max=x;
            else if(x<min) min = x;
        }
        for(int i=max;i>=1;i--){
            if(max%i == 0 && min%i ==0) return i;
        }
    }

int main(){
    vector<int> nums = {3,3};
    cout<<findGCD(nums);
}