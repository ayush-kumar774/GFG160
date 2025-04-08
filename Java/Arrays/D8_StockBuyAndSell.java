package Arrays;

public class D8_StockBuyAndSell {
    public static void main(String[] args) {
        int[] prices1 = {7, 10, 1, 3, 6, 9, 2};
        System.out.println(maxProfit(prices1));
        int[] prices2 = {7, 6, 4, 3, 1};
        System.out.println(maxProfit(prices2));
        int[] prices3 = {1, 3, 6, 9, 11};
        System.out.println(maxProfit(prices3));
    }
    public static int maxProfit(int[] prices) {
        int n = prices.length;
        int profit = 0 ;
        int buy = prices[0] ;

        for (int i = 1 ; i < n ; i++) {
            buy = Math.min(prices[i], buy) ;
            profit = Math.max(profit, (prices[i] - buy)) ;
        }
        return profit;
    }
}
