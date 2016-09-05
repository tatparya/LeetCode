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
    TreeNode* invertTree(TreeNode* root) {
		invertRec( root );
		return root;
    }

	void invertRec( TreeNode * root ){
		// 	Base case
		if( root == NULL )
			return;

		//	Recursive
		//	Invert left
		invertRec( root -> left );
		//	Invert right
		invertRec( root -> right );
		//	Invert root
		invert( root );
	}

	void invert( TreeNode * root ){
		TreeNode * temp = root -> right;
		root -> right = root -> left;
		root -> left = temp;
	}
};
