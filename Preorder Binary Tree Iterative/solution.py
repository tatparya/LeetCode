# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def preorderTraversal(self, root):
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
                ret.append( node.val )
                if node.left != None:
                    cStack.append( node.left )
                rStack.append( node )
            else:
                node = rStack.pop()
                if node.right != None:
                    cStack.append( node.right )
        return ret
