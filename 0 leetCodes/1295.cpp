#include<bits/stdc++.h>
using namespace std;
// Given an array nums of integers, return how many of them contain an even number of digits.

int evenDigits(vector<int>& nums){
    int ans=0;
    for(auto x : nums){
        string y = to_string(x);
        y.length()%2==0 ? ans++ : ans=ans ;
    }
    return ans;
}

int main(){
    vector<int> nums = {12,345,2,6,7896,3,4,5,45,5442,23423,34324};
    cout << evenDigits(nums);
}


