//https://leetcode.com/problems/rearrange-array-elements-by-sign/description/

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>result;
        vector<int>positive;
        vector<int>negetive;
        int pos = 0;
        int neg = 0;

        for(int i = 0;i<nums.size();i++){
            if(nums[i] > 0){
                positive.push_back(nums[i]);
            }
        }
        for(int i = 0;i<nums.size();i++){
            if(nums[i] < 0){
                negetive.push_back(nums[i]);
            }
        }

        for(int i =0;i<nums.size()/2;i++){
            result.push_back(positive[pos]);
            pos++;
            result.push_back(negetive[neg]);
            neg++;
        }

        return result;
    }
};
