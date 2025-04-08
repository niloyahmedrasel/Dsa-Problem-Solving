//https://leetcode.com/problems/longest-substring-without-repeating-characters/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>count(256,0);

        int start = 0;
        int end = 0;
        int length = 0;

        while(end<s.size()){
            while(count[s[end]]){
                count[s[start]] = 0;
                start++;
            }
            count[s[end]] = 1;
            length = max(length,end-start+1);
            end++;
        }

        return length;
    }
};
