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
    int count;
    unordered_map<long,int> map;
    int pathSum(TreeNode* root, int targetSum) {
        traverseTree(root,targetSum,0);
        return count;
        
    }

    void traverseTree(TreeNode* node, int targetSum, long currSum){
        if (!node){
            return;
        }
        currSum += node->val;
        if (currSum == targetSum){
            count += 1;
        }
        if (map.find(currSum - targetSum) != map.end()){
            count += map[currSum - targetSum];
        }
        map[currSum]++;
        traverseTree(node->left, targetSum, currSum);
        traverseTree(node->right, targetSum, currSum);
        //Ensures that we don't check the subtree that we aren't in anymore for values.
        map[currSum]--;
    }

};