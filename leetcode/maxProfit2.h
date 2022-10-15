/**
 * @file maxProfit2.h
 * @author sarace (ttxs69@huisa.win)
 * @brief sum up the profit
 * @version 0.1
 * @date 2022-10-15
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <vector>

int maxProfit2(std::vector<int> &prices) {
  size_t size = prices.size();
  // if size is 1, profit will be 0
  if (size <= 1) {
    return 0;
  }
  // if size is larger than 1
  int maxProfit = 0;
  for (size_t i = 1; i < size; i++) {
    int profit = prices[i] - prices[i - 1];
    if (profit > 0) {
      maxProfit += profit;
    }
  }
  return maxProfit;
}