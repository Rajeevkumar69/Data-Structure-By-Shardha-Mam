#include <iostream>
#include <vector>
using namespace std;

vector<int> productOfArray(vector<int> nums)
{
     int size = nums.size();

     vector<int> ans(size, 1);
     int suffix = 1;

     if (nums.empty())
     {
          return {};
     }

     for (int i = 1; i < size; i++)
     {
          ans[i] = ans[i - 1] * nums[i - 1];
     }
     for (int i = size - 2; i >= 0; i--)
     {
          suffix *= nums[i + 1];
          ans[i] *= suffix;
     }

     return ans;
}

int main()
{
     vector<int> nums = {1, 2, 3, 4};
     vector<int> result = productOfArray(nums);

     for (int value : result)
     {
          cout << value << " ";
     }
     return 0;
}