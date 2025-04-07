//https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/description/

class Solution {
public:
    int getMaxDay(vector<int>bloomDay){
        int maxDay = 0;
        for(int i = 0;i<bloomDay.size();i++){
            maxDay = max(maxDay,bloomDay[i]);
        }

        return maxDay;
    }

    bool getPossibleDay(vector<int>bloomDay,int bouquets,int flowers,int mid){
        bool result = false;
        int bouquetCount = 0;
        int adjacentCount = 0;
        for(int i = 0;i<bloomDay.size();i++){
            if(mid >= bloomDay[i]){
                    adjacentCount++;    
                    if(adjacentCount == flowers){
                        bouquetCount++;
                        adjacentCount = 0;
                    }
                }
            else{
                adjacentCount = 0;
            }
        }

        if(bouquets<=bouquetCount){
            result = true;
        }
        return result;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        if ((long long)m * k > bloomDay.size()) return -1;
        int maxDay = getMaxDay(bloomDay);
        int ans = -1;

        int low = 1;
        int high = maxDay;

        while(low<=high){
            int mid = low + (high-low)/2;

            bool days = getPossibleDay(bloomDay,m,k,mid);

            if(days == true){
                high = mid -1;
                ans = mid;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};
