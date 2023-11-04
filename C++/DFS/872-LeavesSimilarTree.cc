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
 #include <vector>
 #include <iostream>

class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> root1_v, root2_v;

        findRoots(root1,root1_v);
        findRoots(root2,root2_v);

        if (root1_v==root2_v){
            return true;
        }else{
            return false;
        }
        
    }

    void findRoots(TreeNode* node, vector<int>& leaf){
        if (node->left==nullptr && node->right==nullptr){
            leaf.push_back(node->val);
        }else{
            if (node->left!=nullptr){
                findRoots(node->left, leaf);
            }
            if (node->right!=nullptr){
                findRoots(node->right,leaf);
            }
        }
    }
};