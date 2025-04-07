//https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/description/

class Solution {
public:
    int getSum(vector<int>weights){
        int sum = 0;
        for(int i = 0;i<weights.size();i++){
            sum += weights[i];
        }
        return sum;
    }

    bool getCapacity(vector<int>weights,int mid,int days) {
        int dayCount = 1;
        int sum = 0;

        for(int i = 0;i<weights.size();i++){
            sum += weights[i];
            if(sum>mid){
                dayCount++;
                sum = weights[i];
            }   
        }

        if(dayCount > days){
            return false;
        }

        return true;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int ans = -1;
        int low = *max_element(weights.begin(), weights.end());
        int high = getSum(weights);

        while(low<=high){
            int mid = low + (high-low)/2;

            if(getCapacity(weights,mid,days)){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }

        return ans;
    }
};
