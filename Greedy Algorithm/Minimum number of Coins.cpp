//https://www.geeksforgeeks.org/problems/-minimum-number-of-coins4426/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article
class Solution{
public:
    vector<int> minPartition(int N)
    {
        vector<int>ans;
        int arr[10] = {2000,500,200,100,50,20,10,5,2,1};
        int notes = 0,i = 0;
        
        while(N){
            
            notes = N/arr[i];
            
            while(notes--){
                ans.push_back(arr[i]);
            }
            
            N%=arr[i];
            i++;
        }
            return ans;
    }
};
