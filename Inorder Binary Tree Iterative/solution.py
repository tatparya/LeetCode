# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def inorderTraversal(self, root):
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
        # print( "hello world" )

        while ( len(cStack) != 0 ) or ( len(rStack) != 0 ):
            if ( len(cStack) != 0 ):
                node = cStack.pop()
                # print( "Go left ", node.val )
                rStack.append( node )
                if node.left != None:
                    cStack.append( node.left )
            else:
                node = rStack.pop()
                ret.append( node.val )
                # print( node.val )
                # print( "Go right ", node.val )
                if node.right != None:
                    cStack.append( node.right )

        return ret
