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
void recurinorderTraversal(TreeNode* root, vector<int> &A){
    if(!root) return;
    recurinorderTraversal(root ->left, A);
    A.push_back(root -> val);
    recurinorderTraversal(root ->right, A);
}
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        recurinorderTraversal(root,ans);
        return ans;

    }
};
