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
    int totalCountNode(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        return 1+totalCountNode(root->left)+totalCountNode(root->right);
    }
    bool isComplete(TreeNode* root,int index, int totalNodes) {
        if(root==NULL) return true;    
        if(totalNodes<=index) return false;
        return isComplete(root->left, 2*index+1, totalNodes) &&
         isComplete(root->right,2*index+2, totalNodes);       
    }
    bool isCompleteTree(TreeNode*root){
        int totalNodes=totalCountNode(root);
        return isComplete(root,0,totalNodes);
    }
};