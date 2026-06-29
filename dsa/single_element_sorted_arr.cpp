#include <iostream>
#include <vector>
using namespace std;

int findUniqueElement(vector<int> nums)
{
     int size = nums.size();

     if (size == 1)
          return nums[0];

     if (nums[0] != nums[1])
          return nums[0];

     if (nums[size - 1] != nums[size - 2])
          return nums[size - 1];

     for (int i = 1; i < size - 1; i++)
     {
          if (nums[i] != nums[i - 1] && nums[i] != nums[i + 1])
          {
               return nums[i];
          }
     }
     return -1;
}

int main()
{
     vector<int> nums = {1, 1, 2, 3, 3, 4, 4};
     cout << findUniqueElement(nums);
     return 0;
}