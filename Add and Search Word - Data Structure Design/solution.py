class TrieNode(object):
    def __init__(self, isWord):
        self.isWord = isWord
        self.charMap = {}

    def __str__(self):
        return ( "Is Word : " + str( self.isWord ) + str( self.charMap ) )

class WordDictionary(object):
    def __init__(self):
        """
        initialize your data structure here.
        """
        self.root = TrieNode( False )

    def addWord(self, word):
        """
        Adds a word into the data structure.
        :type word: str
        :rtype: void
        """
        #print( "Adding new word : ", word, "\n" )

        temp = self.root
        i = 0
        while i < len( word ):
            #   Check if node exists
            if not word[i] in temp.charMap.keys():
                #   Create new node
                if i == len( word ) - 1:
                    node = TrieNode( True )
                else:
                    node = TrieNode( False )

                #print( "New Node from : ", word[i] )
                temp.charMap[ word[i] ] = node

            #   Update
            temp = temp.charMap[ word[i] ]
            i += 1

        temp.isWord = True

    def dfs(self, root, word):
        #   BASE CASE
        #   Check if word complete
        if len( word ) == 0:
            return root.isWord

        #   RECURSVIE CASE
        #   Check regex
        found = False
        if word[0] == ".":
            #   Try all possible combinations
            for element in root.charMap:
                found = found or self.dfs( root.charMap[ element ], word[1:] )
        else:
            if word[0] in root.charMap.keys():
                found = self.dfs( root.charMap[ word[0] ], word[1:] )

        return found

    def search(self, word):
        """
        Returns if the word is in the data structure. A word could
        contain the dot character '.' to represent any one letter.
        :type word: str
        :rtype: bool
        """

        # print( "Searching pattern : ", word )

        result = self.dfs( self.root, word )
        # if result:
        #     # print( "Found!!\n" )
        # else:
        #     # print( "Not Found!\n" )

        return result

# Your WordDictionary object will be instantiated and called as such:
# wordDictionary = WordDictionary()
# wordDictionary.addWord("word")
# wordDictionary.search("pattern")

def solution():
    wordDictionary = WordDictionary()
    wordDictionary.addWord( "hello" )
    wordDictionary.addWord( "hell" )
    wordDictionary.addWord( "hey" )
    wordDictionary.addWord( "her" )
    wordDictionary.addWord( "har" )
    wordDictionary.search( "world" )
    wordDictionary.search( "hello" )
    wordDictionary.search( "hell" )
    wordDictionary.search( "he" )
    wordDictionary.search( "hey" )
    wordDictionary.search( "heya" )
    wordDictionary.search( "he.")
    wordDictionary.search( "h.r")

def main():
    solution()

if __name__ == "__main__":
    main()
