function maxProfit(prices) {
      let buy = prices[0];
      let profit = 0;

      for (let i = 1; i < prices.length; i++) {
            buy = Math.min(buy, prices[i]);
            profit = Math.max(profit, prices[i] - buy);
      }

      return profit;
}

console.log(maxProfit([7, 10, 1, 3, 6, 9, 2]));
console.log(maxProfit([7, 6, 4, 3, 1]));
console.log(maxProfit([1, 3, 6, 9, 11]));
