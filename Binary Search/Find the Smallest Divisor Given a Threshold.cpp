//https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/description/

class Solution {
public:
    bool getSumValue(vector<int>nums,int mid,int threshold){
        bool result = false;
        int sum = 0;
        for(int i = 0; i<nums.size();i++){
            int value = (nums[i] + mid -1)/mid;
            sum +=value;
        }

        if(threshold>=sum){
            result = true;
        }

        return result;
    }

    int getMax(vector<int>nums){
        int maxVal = -1;
        for(int i = 0;i<nums.size();i++){
            maxVal = max(maxVal,nums[i]);
        }
        return maxVal;
    }


    int smallestDivisor(vector<int>& nums, int threshold) {
        int result = -1;
        int low = 1;
        int high = getMax(nums);

        while(low<=high){
            int mid = low +(high-low)/2;

            if(getSumValue(nums,mid,threshold)){
                result = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }

        return result;
    }
};
