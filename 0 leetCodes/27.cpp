#include<bits/stdc++.h>
using namespace std;

int removeElement(vector<int>& nums, int val){
    for(auto i=nums.begin();i<nums.end();i++){
        cout<<*i<<endl;
        if(*i==val){
            nums.erase(i);
            i--;
        }
    }
    return nums.size();
}

int main(){
vector<int> nums = {0,1,2,2,3,0,4,2};
    int val = 2;
    cout<< removeElement(nums,2);
}