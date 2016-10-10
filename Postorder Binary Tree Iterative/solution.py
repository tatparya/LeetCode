# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def postorderTraversal(self, root):
        """
        :type root: TreeNode
        :rtype: List[int]
        """

        if root == None:
            return []

        ret = []
        cStack = []
        rStack = []

        cStack.append( root )

        while ( len(cStack) != 0 ) or ( len(rStack) != 0 ):
            if ( len(cStack) != 0 ):
                node = cStack.pop()
                if node.left != None:
                    cStack.append( node.left )
                if node.right != None:
                    cStack.append( node.right )
                rStack.append( node )
            else:
                ret.append( rStack.pop().val )

        return ret
