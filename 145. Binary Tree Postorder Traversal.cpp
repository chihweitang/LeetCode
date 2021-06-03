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
    vector<int> postorderTraversal(TreeNode* root) {
        if (!root) {
            return {};
        }
        
        vector<int> nodes;
        postorder(root, nodes);
        return nodes;
    }
    
private:
    void postorder(TreeNode* root, vector<int>& nodes) {
        if (!root) {
            return;
        }
        postorder(root -> left, nodes); //left
        postorder(root -> right, nodes);//right
        nodes.push_back(root -> val); //D
    }
};

//iterative LRD
//O(n) time
