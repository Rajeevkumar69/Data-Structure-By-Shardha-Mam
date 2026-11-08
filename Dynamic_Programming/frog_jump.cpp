#include <iostream>
#include <vector>
using namespace std;

int minCost(vector<int> &height)
{
     int n = height.size();

     if (n == 1)
          return 0;

     vector<int> dp(n);

     dp[0] = 0;
     dp[1] = abs(height[1] - height[0]);

     for (int i = 2; i < n; i++)
     {
          int jump1 = dp[i - 1] + abs(height[i] - height[i - 1]);
          int jump2 = dp[i - 2] + abs(height[i] - height[i - 2]);

          dp[i] = min(jump1, jump2);
     }

     return dp[n - 1];
}

int main()
{
     // vector<int> stepsHeight = {30, 20, 50, 10, 40};
     vector<int> stepsHeight = {20, 30, 40, 20};

     cout << minCost(stepsHeight) << endl;

     return 0;
}