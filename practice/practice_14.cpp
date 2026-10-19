#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> targetIndices(vector<int> &nums, int target)
{
     sort(nums.begin(), nums.end());
     int n = nums.size();
     vector<int> result;

     for (int i = 0; i < n; i++)
     {
          if (nums[i] == target)
          {
               result.push_back(i);
          }
     }
     return result;
}

int main()
{
     vector<int> arr = {1, 2, 5, 2, 3};
     int target = 3;

     vector<int> result = targetIndices(arr, target);
     for (auto v : result)
     {
          cout << v;
     }
     return 0;
}