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

    bool findSum(TreeNode * node, int currentSum, int target) {
        //  Check null
        if (node == NULL)
        {
            return false;
        }

        //  Check if leaf node
        if (node -> left == NULL && node -> right == NULL)
        {
            if (currentSum + node -> val == target)
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        //  Traverse
        if (findSum(node -> left, currentSum + node -> val, target))
        {
            return true;
        }
        else if (findSum(node -> right, currentSum + node -> val, target))
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool hasPathSum(TreeNode* root, int sum) {
        //  Check NULL
        if (root == NULL)
        {
            return false;
        }

        //  Check if root has child
        if (root -> left == NULL && root -> right == NULL)
        {
            if (root -> val == sum)
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        int currentSum = root -> val;

        //  Traverse Tree
        if (findSum(root -> left, currentSum, sum))
        {
            return true;
        }
        else if (findSum(root -> right, currentSum, sum))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
