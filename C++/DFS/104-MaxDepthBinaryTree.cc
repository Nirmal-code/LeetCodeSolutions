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
    int maxDepth(TreeNode* root) {
        return traverse(root, 1);
        
    }

    int traverse(TreeNode* section, int depth){
        int left_sum=depth;
        int right_sum=depth;
        if (section==nullptr){
            return depth-1;
        }
        if (section->left!=nullptr){
            left_sum=traverse(section->left,depth+1);
        }
        if (section->right!=nullptr){
            right_sum=traverse(section->right,depth+1);
        }
        if (left_sum>right_sum){
            return left_sum;
        }else{
            return right_sum;
        }
    }
};