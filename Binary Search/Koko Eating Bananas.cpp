//https://leetcode.com/problems/koko-eating-bananas/description/

class Solution {
public:
    long long findMaxHour(vector<int>& piles, int k) {
        long long hours = 0;
        for (int bananas : piles) {
            hours += (bananas + k - 1LL) / k;  
        }
        return hours;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        int ans = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long hours = findMaxHour(piles, mid);

            if (hours <= h) {
                ans = mid;         
                high = mid - 1;    
            } else {
                low = mid + 1;     
            }
        }

        return ans;
    }
};
