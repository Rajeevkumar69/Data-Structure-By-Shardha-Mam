#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

double knapsack01_MemoDP(vector<vector<int>> &items, int W, int n, vector<vector<int>> &dp)
{
     if (n == 0 || W == 0)
          return 0;

     if (dp[n][W] != -1)
          return dp[n][W];

     int val = items[n - 1][0];
     int wt = items[n - 1][1];

     if (wt <= W)
     {
          int include = val + knapsack01_MemoDP(items, W - wt, n - 1, dp);
          int exclude = knapsack01_MemoDP(items, W, n - 1, dp);
          return dp[n][W] = max(include, exclude);
     }
     else
     {
          return dp[n][W] = knapsack01_MemoDP(items, W, n - 1, dp);
     }
}

int main()
{
     vector<vector<int>> items = {
         {20, 2},
         {30, 3},
         {50, 4},
         {60, 5},
         {100, 9}};
     int W = 10;

     vector<vector<int>> dp(items.size() + 1, vector<int>(W + 1, -1));

     cout << knapsack01_MemoDP(items, W, items.size(), dp) << endl;
     return 0;
}