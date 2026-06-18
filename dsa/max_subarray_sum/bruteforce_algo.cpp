// Maximum sub array sum using Brute Force Algorithm

#include <iostream>
using namespace std;

int main()
{

     int size = 5;
     int nums[5] = {1, 2, 3, 4, 5};

     int maxSum = INT_MIN;

     for (int st = 0; st < size; st++)
     {
          int currSum = 0;
          for (int end = st; end < size; end++)
          {
               currSum += nums[end];
               maxSum = max(currSum, maxSum);
          }
     }

     cout << "Max Sum is = " << maxSum;
     return 0;
}