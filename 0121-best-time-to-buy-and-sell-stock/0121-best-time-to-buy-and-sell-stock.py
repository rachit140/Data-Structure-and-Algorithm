class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        min_price = float('inf')   # track lowest price seen so far
        max_profit = 0             # track best profit

        for price in prices:
            # update min price if current price is lower
            if price < min_price:
                min_price = price
            # calculate profit if sold today
            elif price - min_price > max_profit:
                max_profit = price - min_price

        return max_profit
