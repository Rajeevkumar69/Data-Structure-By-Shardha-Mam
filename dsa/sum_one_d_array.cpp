#include <iostream>
#include <vector>
using namespace std;

int main()
{
     vector<int> nums = {3, 1, 2, 10, 2};

     for (int i = 1; i < nums.size(); i++)
     {
          nums[i] += nums[i - 1];
     }

     for (int num : nums)
     {
          cout << num << " ";
     }

     return 0;
}