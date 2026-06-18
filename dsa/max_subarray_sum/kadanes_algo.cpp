// Maximum sub array sum using Kadane's Algorithm

#include <iostream>
using namespace std;

int main()
{
     int size = 5;
     int nums[5] = {1, 2, 3, 4, 5};
     int currSum = 0, maxSum = INT_MIN;

     for (int i = 0; i < size; i++)
     {
          currSum += nums[i];
          maxSum = max(currSum, maxSum);
          if (currSum < 0)
          {
               currSum = 0;
          }
     }

     cout << "Max sum is: " << maxSum;

     return 0;
}