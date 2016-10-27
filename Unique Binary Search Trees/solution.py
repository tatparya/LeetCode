class Solution(object):
    def calc( self, n, mem ):
        #print( "calculating, ", n )

        if n == 0:
            return 1

        if mem[n - 1] != -1:
            #print( "found in mem!" )
            return mem[n - 1]

        i = 0
        total = 0
        while i < n:
            firstPart = self.calc( i, mem )
            secondPart = self.calc( n - i - 1, mem )
            total += firstPart * secondPart
            i += 1

        mem[ n-1 ] = total
        return total

    def numTrees(self, n):
        """
        :type n: int
        :rtype: int
        """
        if n == 1:
            return 1
        if n == 2:
            return 2
        if n == 3:
            return 5
        mem = [-1] * n
        mem[0] = 1
        mem[1] = 2
        mem[2] = 5
        ans = self.calc( n, mem )
        print( "Answer!" )
        print( ans )

        return ans
