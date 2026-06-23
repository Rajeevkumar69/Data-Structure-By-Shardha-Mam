#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int> nums)
{
     int size = nums.size();
     vector<int> ans(size, 1);

     if (nums.empty())
     {
          return {};
     }

     for (int i = 0; i < size; i++)
     {
          int product = 1;
          for (int j = 0; j < size; j++)
          {
               if (i != j)
               {
                    product = product * nums[j];
               }
          }
          ans[i] = product;
     }
     return ans;
}

int main()
{
     vector<int> nums = {1, 2, 3, 4};

     vector<int> result = productExceptSelf(nums);

     for (int value : result)
     {
          cout << value << " ";
     }

     return 0;
}