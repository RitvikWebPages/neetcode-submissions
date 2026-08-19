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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if((preorder.empty() || inorder.empty())) return nullptr;
        TreeNode* root = new TreeNode(preorder[0]);
        int mid;
        for(int i =0; i <inorder.size();i++){
            if(inorder[i] == preorder[0]){
                mid =i;
                break;
            }
        }
        vector<int> left_pre(preorder.begin()+1, preorder.begin()+mid+1);
        vector<int> right_pre(preorder.begin()+mid+1, preorder.end());
        vector<int> left_ino(inorder.begin(), inorder.begin()+mid);
        vector<int> right_ino(inorder.begin()+mid+1, inorder.end());
        root->left = buildTree(left_pre, left_ino);
        root->right = buildTree(right_pre, right_ino);
        return root;

    }
};
