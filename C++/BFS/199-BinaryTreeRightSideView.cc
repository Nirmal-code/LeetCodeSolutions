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
    vector<int> new_list;
    vector<int> rightSideView(TreeNode* root) {
        unordered_map<int, int> marked;
        traverseTree(root, marked, 0);
        return new_list;
    }

    void traverseTree(TreeNode* node, unordered_map<int,int> &marked, int height){
        if (!node){
            return;
        }
        if (!marked[height]){
            marked[height]=1;
            new_list.push_back(node->val);
        }
        traverseTree(node->right,marked,height+1);
        traverseTree(node->left,marked,height+1);
    }

    


};