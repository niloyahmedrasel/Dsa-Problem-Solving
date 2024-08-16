class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
      stack<int>temp;
    
      for (int i = 0; i < arr.size(); i++) {
            if (!temp.empty()) {
                // Only pop if the top and current element have opposite signs
                if ((arr[i] >= 0 && temp.top() < 0) || (arr[i] < 0 && temp.top() >= 0)) {
                    temp.pop();
                } else {
                    temp.push(arr[i]);
                }
            } else {
                temp.push(arr[i]);
            }
        }
      
      vector<int>arr2(temp.size());

      int i = temp.size()-1;
      while(!temp.empty()){
          arr2[i] = temp.top();
          temp.pop();
          i--;
      }
      return arr2;
    }
};
