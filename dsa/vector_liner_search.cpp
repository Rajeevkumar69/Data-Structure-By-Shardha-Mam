#include <iostream>
#include <vector>
using namespace std;

int linerSearch(vector<int> &nums, int target)
{

     for (int i = 0; i < nums.size(); i++)
     {
          if (nums[i] == target)
          {
               return i;
          }
     }
     return -1;
}

int main()
{
     vector<int> nums = {10, 20, 30, 40, 50};
     int target = 20;

     cout << linerSearch(nums, target);

     return 0;
}