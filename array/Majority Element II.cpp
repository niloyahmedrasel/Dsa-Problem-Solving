//https://leetcode.com/problems/majority-element-ii/description/

#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> result;
        set<int> seen; 

        for (int i = 0; i < nums.size(); i++) {
            int count = 0;
            
            for (int j = 0; j < nums.size(); j++) {
                if (nums[i] == nums[j]) {
                    count++;
                }
            }

            
            if (count > nums.size() / 3 && seen.find(nums[i]) == seen.end()) {
                result.push_back(nums[i]);
                seen.insert(nums[i]); 
            }
        }
        
        return result;
    }
};
