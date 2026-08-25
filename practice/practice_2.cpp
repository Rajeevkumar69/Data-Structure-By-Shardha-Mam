#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
/*
217. Contains Duplicate [Easy]

Given an integer array nums, return `true` if any value appears at least twice in the array, and return `false` if every element is distinct.

Example 1:

Input: nums = [1,2,3,1]

Output: true
*/
bool containsDuplicate(vector<int> &nums, int n)
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

// Best Approach unorders_set

bool containsDuplicate(vector<int> &nums, int n)
{

     unordered_set<int> seen;

     for (int i = 0; i < n; i++)
     {

          if (seen.count(nums[i]))
          {
               return true;
          }

          seen.insert(nums[i]);
     }

     return false;
}
/*
Maximum SubArray
[1,2,3,6,5]

1, 12, 123, 1236, 12365
2, 23, 236, 2365
3, 36, 365
6, 65
5
*/
void printMaxSubArray(vector<int> &arr, int n)
{

     for (int st = 0; st < n; st++)
     {
          for (int end = st; end < n; end++)
          {

               for (int i = st; i <= end; i++)
               {
                    cout << arr[i] << ",";
               }
          }
          cout << "\n";
     }
}
/*
Maximum SubArray Sum
[1,2,3,6,5]

1, 12, 123, 1236, 12365 ->5
2, 23, 236, 2365        ->4
3, 36, 365              ->3
6, 65                   ->2
5                       ->1
*/
void calculateMaxSubArraySum(vector<int> &arr, int n)
{

     int maxSum = INT_MIN;
     for (int i = 0; i < n; i++)
     {

          int currSum = 0;
          for (int j = i; j < n; j++)
          {
               currSum += arr[j];
               maxSum = max(maxSum, currSum);
          }
     }
     cout << maxSum;
}
/*
169. Majority Element [Easy]

Given an array `nums` of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

Example 1:

Input: nums = [3,2,3]
Output: 3
*/

int majorityElement(vector<int> &nums, int n)
{
     int ans, count = 0;

     for (int i = 0; i < n; i++)
     {
          count = 1;

          for (int j = i + 1; j < n; j++)
          {
               if (nums[i] == nums[j])
               {
                    count++;
                    ans = nums[i];
               }
          }
          if (ans > n / 2)
          {
               return nums[i];
          }
     }
     return -1;
}

// Boyer Moore Algorithm
int countMajority(vector<int> &nums, int n)
{

     int candidate = -1;
     int vote = 0;

     // Step 1: Find candidate
     for (int i = 0; i < n; i++)
     {

          if (vote == 0)
          {
               candidate = nums[i];
          }

          if (nums[i] == candidate)
          {
               vote++;
          }
          else
          {
               vote--;
          }
     }

     // Step 2: Verify candidate
     int count = 0;

     for (int i = 0; i < n; i++)
     {
          if (nums[i] == candidate)
          {
               count++;
          }
     }

     if (count > n / 2)
     {
          return candidate;
     }

     return -1;
}

/*
2965. Find Missing and Repeated Values [Easy]

You are given a 0-indexed 2D integer matrix grid of size n * n with values in the range [1, n2].
Each integer appears exactly once except a which appears twice and b which is missing.
The task is to find the repeating and missing numbers a and b.

Example 1:

Input: grid = [[1,3],[2,2]]
Output: [2,4]
Explanation: Number 2 is repeated and number 4 is missing so the answer is [2,4].
*/

vector<int> findMissingAndRepeatedValue(vector<vector<int>> &grid)
{

     int n = grid.size();
     int total = n * n;

     vector<int> freq(total + 1, 0);

     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j < n; j++)
          {
               freq[grid[i][j]]++;
          }
     }

     int repeated = -1;
     int missing = -1;

     for (int i = 1; i <= total; i++)
     {

          if (freq[i] == 2)
          {
               repeated = i;
          }

          if (freq[i] == 0)
          {
               missing = i;
          }
     }

     return {repeated, missing};
}