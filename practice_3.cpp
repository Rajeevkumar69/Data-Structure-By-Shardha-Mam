#include <iostream>
#include <vector>
using namespace std;

/*Given a non-empty array of integer nums, every element appears twice except for one. Find that single one.

Example 1:
Input: nums = [2, 2, 1]
Output: 1

1. Understand XOR Basics

a ^ a = 0 (same numbers cancel out)
0 ^ a = a (XOR with zero keeps the number unchanged.)
*/

int findElement(vector<int> &nums, int n)
{

     int xorValue = 0;

     for (int i = 0; i < n; i++)
     {
          xorValue ^= nums[i];
     }
     return xorValue;
}

// Given an integer array nums return `true` if any value appers twice in the array else return `false`

bool checkOccurance(vector<int> &nums, int n)
{
     for (int i = 0; i < n; i++)
     {
          for (int j = i + 1; j < n; j++)
          {
               if (nums[i] == nums[j])
               {
                    return true;
               }
          }
     }
     return false;
}

/*
There're integer array nums sorted in ascending order(with distinct value).
Given an integer array nums after the possible rotation & an integer target, return the index of target if it's in nums else return -1

You must write the O(log n) TC Algorithm

nums=[4,5,6,7,0,1,2],target=0
4
nums=[4,5,6,7,0,1,2],target=3
-1
*/

int findIndex(vector<int> &nums, int n, int target)
{
     int st = 0, end = n - 1;

     while (st <= end)
     {
          int mid = st + (end - st) / 2;

          if (nums[mid] == target)
          {
               return mid;
          }

          else if (nums[st] <= nums[mid])
          {
               if (nums[st] <= target && target <= nums[mid])
               {
                    end = mid - 1;
               }
               else
               {
                    st + mid + 1;
               }
          }
          else
          {
               if (nums[mid] <= target && target <= nums[end])
               {
                    st = mid + 1;
               }
               else
               {
                    end = mid - 1;
               }
          }
     }
     return -1;
}

int findIndex(vector<int> &nums, int n, int target)
{
     int st = 0, end = n - 1;

     while (st <= end)
     {
          int mid = st + (end - st) / 2;

          if (nums[mid] == target)
          {
               return mid;
          }
          else if (nums[st] < target)
          {
               st = mid + 1;
          }
          else
          {
               end = mid - 1;
          }
     }
     return -1;
}

/*
Given an integer array nums, find the subarray that has the largest product & return the product.

Examples:
nums=[2,3,-2,4]
6
Explanation:[2,3]has the largest product 6.

nums=[-2,0,-1]
0
Explanation: The result cannot be 2, because [-2,-1] is not a subarray
*/

int subArrayProduct(vector<int> &nums, int n)
{
     int maxProd = INT_MIN;

     for (int st = 0; st < n; st++)
     {
          int currProd = 1;

          for (int end = st; end < n; end++)
          {

               currProd *= nums[end];
               maxProd = max(maxProd, currProd);
          }
     }
     return maxProd;
}

int main()
{
     return 0;
}