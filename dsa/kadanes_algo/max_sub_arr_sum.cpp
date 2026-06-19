#include <iostream>
#include <vector>
using namespace std;

int main()
{
     vector<int> nums = {1, 2, 3, 4, 5};
     int size = nums.size();

     int currSum = 0, maxSum = INT_MIN;

     for (int value : nums)
     {
          currSum += value;
          maxSum = max(currSum, maxSum);

          if (maxSum < 0)
          {
               maxSum = 0;
          }
     }

     cout << maxSum;
     return 0;
}