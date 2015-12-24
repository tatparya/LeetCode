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
    int maxDepth(TreeNode* root) {
		int height = getMax( root, 0 );
		return height;
    }

	int getMax( TreeNode * root, int height ){
		//	Traverse
		if( root == NULL ){
			return height;
		}
		int heightLeft = getMax( root -> left, height + 1);
		int heightRight = getMax( root -> right, height + 1);

		if( heightLeft > heightRight )
			return heightLeft;
		else
			return heightRight;
	}
};
