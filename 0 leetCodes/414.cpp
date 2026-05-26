#include<bits/stdc++.h>
using namespace std;

int thirdLargest(vector<int>& nums){
    int max=nums[0];
    int max2;
    bool isMax2 = false;
    int max3;
    bool isMax3 = false;
    for(int i=1;i<nums.size();i++){
        if (max==nums[i]) continue;
        else if(isMax2 == false && isMax3==false){
            if(nums[i]>max){
                max2=max;
                isMax2=true;
                max = nums[i];
            }
            else{
                max2=nums[i];
                isMax2=true;
            }
        }
        else if(isMax3==false){
            
            if (nums[i]==max2||nums[i]==max) continue;
            else if(nums[i]>max){
                max3=max2;
                isMax3=true;
                max2=max;
                max = nums[i];
                
            }
            else if(nums[i]>max2){
                max3=max2;
                isMax3=true;
                max2=nums[i];
            }
            else{
                max3=nums[i];
                isMax3=true;
            }
        }
        else{
            if (nums[i]==max3 || nums[i]==max2 || nums[i]==max) continue;
            else if(nums[i]>max){
                max3=max2;
                max2=max;
                max = nums[i];
            }
            else if(nums[i]>max2){
                max3=max2;
                max2=nums[i];
            }
            else if(nums[i]>max3){
                max3=nums[i];
                isMax3=true;
            }
        }
        

    }
    if(isMax3==false) return max;
        return max3;
}
int main(){
    vector<int> nums1 = {3,3,3,3,4,3,2,3,3};
    vector<int> nums2 = {2,1,-2147483648};
    vector<int> nums3 = {1,2,3,2,3,4};
    int max3 = thirdLargest(nums1);
    cout<<max3;
}