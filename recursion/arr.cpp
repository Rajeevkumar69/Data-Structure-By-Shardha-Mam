// Check if array is sorted or not using recursion
#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int> arr, int n)
{
     if (n == 0 || n == 1)
     {
          return true;
     }

     return arr[n - 1] >= arr[n - 2] && isSorted(arr, n - 1);
}
int main()
{

     vector<int> nums = {1, 2, 5, 8, 9};

     cout << isSorted(nums, nums.size());

     return 0;
}