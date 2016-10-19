class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """

        #   Min two elements
        if len( prices ) < 2:
            return

        bestBuy = 0
        bestSell = 0

        bestProfit = 0

        buy = 0
        sell = 0
        profit = prices[ buy ] - prices[ sell ]

        i = 0

        while i < len( prices ):
            #   Check min
            if prices[i] < prices[ buy ]:
                #   Update new min
                buy = i
                sell = i
            #   Check max
            if prices[i] > prices[ sell ]:
                sell = i

            #   Check new profit
            profit = prices[sell] - prices[buy]
            if profit > bestProfit:
                bestBuy = buy
                bestSell = sell
                bestProfit = profit

            i += 1

        print( bestBuy, bestSell, bestProfit )

def solution( pairs ):
    pass

def main():
    prices = list(map( int, input().split() ))
    sol = Solution()
    sol.maxProfit( prices )

if __name__ == "__main__":
    main()

#   Doodle
# [7,1,5,3,6,4]
#
# 7  _
# 6          _
# 5      _
# 4            _
# 3        _
# 2
# 1    _
# 0  _ _ _ _ _ _ _
