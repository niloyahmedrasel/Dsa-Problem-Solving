  public:
    int removeConsecutiveSame(vector<string>& arr) {
        stack<string>temp;
        
        for(int i =0;i<arr.size();i++){
            if(temp.empty()){
                temp.push(arr[i]);
            }
            else{
                if(arr[i]==temp.top()){
                    temp.pop();
                }
                else{
                    temp.push(arr[i]);
                }
            }
        }
        return temp.size();
    }
};
