/*
Sub array sum equals K: Optimal Approach
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int countSubArrSum(vector<int> nums, int k)
{
     int n = nums.size(), count = 0;
     vector<int> prefixSum(n, 0);

     prefixSum[0] = nums[0];

     for (int i = 1; i < n; i++)
     {
          prefixSum[i] = prefixSum[i - 1] + nums[i];
     }

     unordered_map<int, int> m;

     for (int j = 0; j < n; j++)
     {
          if (prefixSum[j] == k)
               count++;

          int val = prefixSum[j] - k;

          if (m.find(val) != m.end())
          {
               count += m[val];
          }

          m[prefixSum[j]]++;
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