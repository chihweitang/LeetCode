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
    vector<int> inorderTraversal(TreeNode* root) {
        
        vector<int> res;
        helper(root, res);
        return res;
        
    }
    void helper(TreeNode* root, vector<int> &nodes){
        if(!root)
            return;
        
        helper(root->left, nodes);  //left
        nodes.push_back(root->val); //d
        helper(root->right, nodes); //right
    }
    
};

//recursive 
//time:O(n), space:O(n)
