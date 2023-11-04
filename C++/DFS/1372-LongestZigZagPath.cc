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
    int max_length=0;
    int longestZigZag(TreeNode* root) {
        traverseTree(root,0,true);
        traverseTree(root,0,false);
        return max_length;
        
    }

    void traverseTree(TreeNode* node, int currCount, bool left){
        if (node==nullptr){
            return;
        }
        max_length=max(max_length,currCount);

        if (left){
            traverseTree(node->right,currCount+1,false);
            traverseTree(node->left,1,true);
        }else{
            traverseTree(node->left,currCount+1,true);
            traverseTree(node->right,1,false);
        }

    }

};