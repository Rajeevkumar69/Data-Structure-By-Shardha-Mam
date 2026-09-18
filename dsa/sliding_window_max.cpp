#include <iostream>
#include <vector>
using namespace std;

vector<int> maxSlidingWindow(vector<int> nums, int k)
{
     int n = nums.size();
     vector<int> ans;

     for (int i = 0; i <= n - k; i++)
     {
          int maxVal = INT_MIN;

          for (int j = i; j < i + k; j++)
          {
               maxVal = max(maxVal, nums[j]);
          }
          ans.push_back(maxVal);
     }
     return ans;
}

int main()
{
     vector<int> arr = {1, 3, -1, -3, 5, 3, 6, 7};
     int k = 3;

     vector<int> result = maxSlidingWindow(arr, k);

     for (auto val : result)
     {
          cout << val << " ";
     }
     return 0;
}