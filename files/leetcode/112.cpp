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
    bool done = false;
    int targetSummy = 0;
    bool hasPathSum(TreeNode* root, int targetSum) {
        targetSummy = targetSum;
        if (root != nullptr){
            finduntilend(root, 0);
        }

        if (done == true){
            return true;
        }
        else{
            return false;
        }
    }

    void finduntilend(TreeNode* node, int currnum){
        int local = currnum;
        local += node->val;
        if (done == false){
            if (node->left == nullptr && node->right == nullptr){
                if (local == targetSummy){
                    done = true;
                }
            }else{
                if(node->left != nullptr){
                    finduntilend(node->left, local);
                }
                if(node->right != nullptr){
                    finduntilend(node->right, local);
                }
            }
        }
    };
};