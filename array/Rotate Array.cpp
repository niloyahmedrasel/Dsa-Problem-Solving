//https://leetcode.com/problems/rotate-array/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>copy = nums;
        int j = nums.size()-1;
        k = k % nums.size();
        int var = 0;
        int temp = k;
        for(int i = 0;i<nums.size();i++){
            if(k > i){
                nums[temp-1] = copy[j];
                j--; 
                temp--; 
                     
            }
            else{
                nums[i] = copy[var];
                var++;
            }  
        }
    }
};
