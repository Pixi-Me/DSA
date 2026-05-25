#include<bits/stdc++.h>
using namespace std;

int thirdLargest(vector<int>& nums){
    int max=nums[0];
    int max2;
    int max3;
    for(int i=1;i<nums.size();i++){
        if(nums[i]==max) continue;
        
        else if(nums[i]>max){
            max3=max2;
            max2=max;
            max=nums[i];
            }
        else if(nums[i]==max2) continue;
        else if(nums[i]>max2){
            max3=max2;
            max2=nums[i];
        }
        else if(nums[i]==max3) continue;
        else if(nums[i]>max3){
            max3=nums[i];
        }
    }
    if(!max3 || nums.size()<=2) return *max_element(nums.begin(),nums.end());
    return max3;
}
int main(){
    vector<int> nums1 = {1,2,3};
    vector<int> nums2 = {2,1,-2147483648};
    vector<int> nums3 = {14};
    int max3 = thirdLargest(nums3);
    cout<<max3;
}