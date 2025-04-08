def maximum_profit(prices):
    return sum(
            prices[i] - prices[i - 1]
            for i in range(1, len(prices))
            if prices[i] > prices[i - 1]
    )


prices = [100, 180, 260, 310, 40, 535, 695]
print(maximum_profit(prices))  
