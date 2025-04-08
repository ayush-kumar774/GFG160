#include <iostream>
#include <vector>
#include "ArrayUtils.h"
using namespace std;

int maxProfit(const vector<int> &prices)
{
      int n = prices.size();
      int profit = 0, buy = prices[0];

      for (int i = 1; i < n; i++)
      {
            buy = min(buy, prices[i]);
            profit = max(profit, prices[i] - buy);
      }
      return profit;
}

int main()
{
      vector<int> prices1 = {7, 10, 1, 3, 6, 9, 2};
      vector<int> prices2 = {7, 6, 4, 3, 1};
      vector<int> prices3 = {1, 3, 6, 9, 11};

      cout << maxProfit(prices1) << endl;
      cout << maxProfit(prices2) << endl;
      cout << maxProfit(prices3) << endl;

      return 0;
}
