class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        num = 0
        total = 0
        sign = 1

        if x < 0:
            sign = -1
            x = x * -1;

        while x != 0:
            print( x )
            num = x % 10
            total = total * 10 + num

            x = x / 10

        if total > 2**31:
            total = 0

        return total * sign
        
