# Definition for singly-linked list with a random pointer.
# class RandomListNode(object):
#     def __init__(self, x):
#         self.label = x
#         self.next = None
#         self.random = None

def printList( head ):
    temp = head
    print( "\nList :\n")
    while( temp != None ):
        if temp.next != None:
            print( temp.label, " -> ", end = " " )
        else:
            print( temp.label )
        temp = temp.next

    temp = head
    print( "\nRandoms : \n")
    while( temp != None ):
        if temp.random != None:
            print( temp.label, " -> ", temp.random.label )
        else:
            print( temp.label )

        temp = temp.next

def insertCopy( head ):
    temp = head
    while( temp != None ):
        newNode = RandomListNode( temp.label )
        newNode.next = temp.next
        temp.next = newNode

        #   Update
        temp = newNode.next

def setRandoms( head ):
    temp = head
    while( temp != None ):
        print( "Element : ", temp.label )
        if temp.random != None:
            temp.next.random = temp.random.next

        temp  = temp.next.next

def seperateList( head ):
    h1 = head
    h2 = head.next
    temp = head
    temp2 = head.next
    while( temp2.next != None ):
        temp.next = temp2.next
        temp2.next = temp.next.next

        temp = temp.next
        temp2 = temp2.next

    temp.next = None

    return (h1, h2)


def copyRandomList( head ):
    """
    :type head: RandomListNode
    :rtype: RandomListNode
    """
    print( "\n\nCopying List" )
    printList( head )
    insertCopy( head )
    printList( head )
    setRandoms( head )
    printList( head )
    h1, h2 = seperateList( head )
    print( "\nH1\n")
    printList( h1 )
    print( "\nH2\n")
    printList( h2 )

class RandomListNode:
    def __init__( self, x ):
        self.label = x
        self.next = None
        self.random = None

    def __str__( self ):
        return str(self.label)

def main():
    nodes = []
    for i in range( 10 ):
        node = RandomListNode( i )
        nodes.append( node )

        if i != 0:
            print( "Setting ", i-1, "\'s next to ", i)

    i = 0
    for element in nodes:
        print( element.label )
        i += 1
        if i < 10:
            element.next = nodes[i]

    printList( nodes[0] )

    #   Set randoms
    nodes[0].random = nodes[7]
    nodes[1].random = nodes[1]
    nodes[2].random = nodes[3]
    nodes[3].random = nodes[4]
    nodes[5].random = nodes[0]
    nodes[6].random = nodes[2]
    nodes[7].random = nodes[9]
    nodes[8].random = nodes[2]

    copyRandomList( nodes[0] )

if __name__ == '__main__':
    main()
