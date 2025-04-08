//https://leetcode.com/problems/max-consecutive-ones-iii/description/

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

        int start = 0, length = 0, countZero = 0;

        for(int end = 0;end<nums.size();end++){
            if(nums[end] == 0){
                countZero++;
            }

            while(countZero>k){
                if(nums[start]==0){
                    countZero--;
                }
                start++;
            }

            length = max(length,end-start+1);
        }
        return length;
    }
};
