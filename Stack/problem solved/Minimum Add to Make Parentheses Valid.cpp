//https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/?source=submission-ac
class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<int>temp;
        int count = 0;

        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                temp.push(s[i]);
            }
            else if(!temp.empty() && temp.top() == '('){
                temp.pop();
            }
            else{
                count++;
            }
        }
        return temp.size()+count;

    }
};
