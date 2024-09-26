#include <iostream>
#include <climits>
using namespace std;

void maxProfit(int prices[], int lenth) {
  int bestBuy[100000];
  bestBuy[0] = INT_MAX;

  for (int i = 1; i < lenth; i++) {
    bestBuy[i] = min(bestBuy[i-1], prices[i-1]);
  }
  int maxProfit = 0;
  for (int i = 0; i < lenth; i++) {
    int currProfit = prices[i] - bestBuy[i];
    maxProfit = max(maxProfit, currProfit);
  }

  cout <<"max Profit = " << maxProfit << endl;
};

int main() {
  int prices[] = {7,1,5,3,6,4};
  int lenth = sizeof(prices) / sizeof(int);

  maxProfit(prices, lenth);

  return 0;
}
