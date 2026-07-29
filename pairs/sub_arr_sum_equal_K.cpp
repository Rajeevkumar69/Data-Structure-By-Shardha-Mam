/*
Sub array sum equals K : Brute force approach
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int countSubArrSum(vector<int> nums, int K)
{
     int n = nums.size(), count = 0;

     for (int i = 0; i < n; i++)
     {
          int sum = 0;
          for (int j = i; j < n; j++)
          {
               sum = sum + nums[j];
               if (sum == K)
               {
                    count++;
               }
          }
     }
     return count;
}

int main()
{
     vector<int> arr = {9, 4, 11, 3, 6, 16};
     int tar = 33;

     cout << countSubArrSum(arr, tar);
     return 0;
}