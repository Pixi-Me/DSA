if(nums[i]==max || nums[i]==max2) continue;
        if(nums[i]>max){
            max3=max2;
            max2=max;
            max=nums[i];
            }
        else if(nums[i]>max2){
            max3=max2;
            max2=nums[i];
        }
        else if(nums[i]>max3){
            max3=nums[i];
        }
        else if(nums[i]==max3){
            return max3;
        }
    }
    if(max3==-2147483648) return *max_element(nums.begin(),nums.end());
    return max3;