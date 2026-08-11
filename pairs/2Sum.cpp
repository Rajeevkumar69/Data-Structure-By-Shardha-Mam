#include <iostream>
#include <vector>
using namespace std;

void twoSum(vector<int> nums, int n, int target)
{

     for (int i = 0; i < n; i++)
     {
          for (int j = i + 1; j < n; j++)
          {
               if (nums[i] + nums[j] == target)
               {
                    cout << i << ", " << j;
               }
          }
     }
}

int main()
{
     vector<int> arr = {1, 3, 5, 0};
     int size = arr.size();
     int target = 1;

     twoSum(arr, size, target);
     return 0;
}