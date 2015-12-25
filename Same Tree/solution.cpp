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
    bool isSameTree(TreeNode* p, TreeNode* q) {

		//	Traverse both trees
		return traverse( p, q );

    }

	bool traverse( TreeNode * p, TreeNode * q ){
		//	Check base
		if( p == NULL || q == NULL ){
			if( p != NULL || q != NULL )
				return false;
			else
				return true;
		}

		//	left
		bool left = traverse( p -> left, q -> left );
		//	right
		bool right = traverse( p -> right, q -> right );
		//	visit
		bool same = visit( p, q );

		return ( left & right & same );
	}

	bool visit( TreeNode * p, TreeNode * q ){
		if( p -> val == q -> val )
			return true;
		else
			return false;
	}
};
