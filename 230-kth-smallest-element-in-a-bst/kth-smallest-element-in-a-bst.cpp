/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    vector<int> aditya;
public:
    vector<int> inorder(TreeNode* root){
        
        if(root!=nullptr){
            aditya.push_back(root->val);
            inorder(root->left);
            inorder(root->right);
        }

        return aditya;
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> ans = inorder(root);
        sort(ans.begin(),ans.end());
        return ans[k-1];
    }
};