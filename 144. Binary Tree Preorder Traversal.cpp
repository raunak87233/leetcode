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
public:
void recurpreorderTraversal(TreeNode* root, vector<int> &A){
    if(!root) return;
    A.push_back(root -> val);
    recurpreorderTraversal(root -> left,A);
    recurpreorderTraversal(root -> right,A);
}
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        recurpreorderTraversal(root,ans);
        return ans;

        
    }
};
