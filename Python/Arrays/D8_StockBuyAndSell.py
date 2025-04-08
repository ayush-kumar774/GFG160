def max_profit(prices):
    buy = prices[0]
    profit = 0

    for price in prices[1:]:
            buy = min(buy, price)
            profit = max(profit, price - buy)

    return profit

print(max_profit([7, 10, 1, 3, 6, 9, 2]))
print(max_profit([7, 6, 4, 3, 1]))
print(max_profit([1, 3, 6, 9, 11]))
