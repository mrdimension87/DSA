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
    vector<int> left;
    vector<int> right;
public:
    void pre_order_left(TreeNode* root){
        if(root == nullptr){
            left.push_back(-1);
            return;
        }
        if(root!= nullptr){
            left.push_back(root->val);
            pre_order_left(root->left);
            pre_order_left(root->right);
        }
    }

    void pre_order_right(TreeNode* root){
        if(root == nullptr){
            right.push_back(-1);
            return;
        }
        if(root!= nullptr){
            right.push_back(root->val);
            pre_order_right(root->right);
            pre_order_right(root->left);
        }
    }

    bool isSymmetric(TreeNode* root) {
        pre_order_left(root);
        pre_order_right(root);
        int n = left.size();
        if(left.size()!= right.size()){
            return false;
        }
        for(int i =0; i<n; i++){
            if(left[i] != right[i]){
                return false;
            }
        }
        return true;
    }
};