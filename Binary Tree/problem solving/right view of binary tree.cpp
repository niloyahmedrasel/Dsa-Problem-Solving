//https://leetcode.com/problems/binary-tree-right-side-view/description/
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        if (!root) return {}; //Check if the root is null
        
        queue<TreeNode*> q;
        q.push(root);
        vector<int> ans;

        while (!q.empty()) {
            int n = q.size();
            TreeNode* lastNode = nullptr;

            while (n--) {
                TreeNode *temp = q.front();
                q.pop();
                
                // Update lastNode to the current node
                lastNode = temp;
                
                // Push left and right children to the queue
                if (temp->left) {
                    q.push(temp->left);
                }
                if (temp->right) {
                    q.push(temp->right);
                }
            }

            // Add the rightmost node's value to ans
            if (lastNode) {
                ans.push_back(lastNode->val);
            }
        }

        return ans;
    }
};
