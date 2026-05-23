#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums){
    for(auto i=nums.begin()+1;i!=nums.end();i++){
        if(*i==*(i-1)){
            nums.erase(i);
            i--;
        }
    }
    return nums.size();
}

int main(){
    vector<int> nums = {1,1,2,2,3,4,4,5,6,6,7,7,7,7};
    cout<< removeDuplicates(nums);
}