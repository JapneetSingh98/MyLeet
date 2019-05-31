/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        vector<TreeNode*> thisLevel;
        thisLevel.push_back(root);
        return helper(thisLevel);
    }
    
    bool helper(vector<TreeNode*> curr) {
        bool empty = true;
        for (int i = 0; i < curr.size(); i++) {
            if (curr[i] != NULL) {
                empty = false;
                break;
            }
        }
        if (empty) {
            return true;
        }
        for (int i = 0; i < curr.size()/2 + 1; i++) {
            if (curr[i] == NULL && curr[curr.size()-1-i] == NULL) {
                continue;
            } else if (curr[i] == NULL || curr[curr.size()-1-i] == NULL) {
                return false;
            } else if (curr[i]->val != curr[curr.size()-1-i]->val) {
                return false;
            }
        }
        vector<TreeNode*> nextRow;
        for (int i = 0; i < curr.size(); i++) {
            if (curr[i] == NULL) {
                nextRow.push_back(NULL);
                nextRow.push_back(NULL);
            } else {
                nextRow.push_back(curr[i]->left);
                nextRow.push_back(curr[i]->right);
            }
        }
        return helper(nextRow);
    }
};
