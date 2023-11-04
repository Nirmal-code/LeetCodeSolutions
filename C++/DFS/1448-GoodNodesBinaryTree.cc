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
    int goodNodes(TreeNode* root) {
        int count=0;
        return traverseTree(root,count,INT_MIN);
        
    }

    int traverseTree(TreeNode* node, int &count, int maximum){
        if (node->val>=maximum){
            count+=1;
            maximum=node->val;
        }
        if (node->left!=nullptr){
            traverseTree(node->left, count, maximum);
        }
        if (node->right!=nullptr){
            traverseTree(node->right, count, maximum);
        }
        return count;
    }
};