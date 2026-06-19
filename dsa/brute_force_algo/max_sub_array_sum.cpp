#include <iostream>
#include <vector>
using namespace std;

int main()
{
     vector<int> nums = {2, 3, 4, 5, 6};
     int size = nums.size();

     int maxSum = INT_MIN;

     for (int st = 0; st < size; st++)
     {
          int currSum = 0;
          for (int end = st; end < size; end++)
          {
               currSum = currSum + nums[end];
               maxSum = max(currSum, maxSum);
          }
     }
     cout << maxSum;
     return 0;
}