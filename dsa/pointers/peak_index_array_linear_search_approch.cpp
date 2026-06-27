#include <iostream>
#include <vector>
using namespace std;

// find peak index in  mountain array
// mountain araay => which value is highest value in given array

int findPeakIndex(vector<int> nums)
{
     int size = nums.size() - 1;
     for (int i = 1; i < size; i++)
     {
          if (nums[i] > nums[i - 1] && nums[i] > nums[i + 1])
          {
               return i;
          }
     }
     return -1;
}

int main()
{
     vector<int> arr = {0, 1, 5, 8, 9, 6, 3, 2};
     cout << findPeakIndex(arr);

     return 0;
}