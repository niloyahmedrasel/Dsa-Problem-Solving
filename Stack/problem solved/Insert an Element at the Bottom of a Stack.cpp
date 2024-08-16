//https://www.geeksforgeeks.org/problems/insert-an-element-at-the-bottom-of-a-stack/1?page=2&category=Stack&difficulty=Easy&sortBy=submissions

class Solution{
public:
    stack<int> insertAtBottom(stack<int> st,int x){
        stack<int>temp;
        
        
        while(!st.empty()){
            temp.push(st.top());
            st.pop();
        }
        
        st.push(x);
        
        while(!temp.empty()){
            st.push(temp.top());
            temp.pop();
        }
        
        return st;
    }
};
