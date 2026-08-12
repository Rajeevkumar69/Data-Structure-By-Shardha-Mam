#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// given a sorted array, find two numbers that add up to a target.

// [5,7,9,11,22]

// target = 20

// Brute forece approach to find the pair of target TC: O(n*n)
void findTarget(vector<int> &arr, int n, int target)
{
     bool findTarget = false;

     for (int i = 0; i < n; i++)
     {
          for (int j = i + 1; j < n; j++)
          {
               if (arr[i] + arr[j] == target)
               {
                    cout << i << " " << j;
                    findTarget = true;
                    break;
               }
          }
     }
     if (!findTarget)
     {
          cout << -1 << " " << -1;
     }
}

// Two pointers approach to find the target
void findTarget(vector<int> &arr, int n, int target)
{

     int start = 0, end = n - 1;
     bool found = false;
     while (start < end)
     {
          int sum = arr[start] + arr[end];

          if (sum == target)
          {
               cout << start << " " << end;
               found = true;
               break;
          }
          else if (sum < target)
          {
               start++;
          }
          else
          {
               end--;
          }
     }
     if (!found)
     {
          cout << -1 << " " << -1;
     }
}

// given a sorted array, remove the duplicates in place

// [2,4,4,6,8,19]

// Brute Force approach
vector<int> removeDuplicate(vector<int> &arr, int n)
{

     for (int i = 0; i < n; i++)
     {
          for (int j = i + 1; j < n; j++)
          {
               if (arr[i] == arr[j])
               {
                    arr.erase(arr.begin() + j);
                    n--; // size dec--
                    j--; // inner loop --
               }
          }
     }
     return arr;
}

vector<int> removeDuplicate(vector<int> &arr, int n)
{
     if (n == 0)
          return 0;

     int i = 0;

     for (int j = 1; j < n; j++)
     {
          if (arr[j] != arr[i])
          {
               i++;
               arr[i] = arr[j];
          }
     }

     return i + 1;
}

// Find the target element in an unique array

// [2,3,6,1,5,4]
// target = 5

// Brute force approach TC: O(n)
int findTargetElement(vector<int> &arr, int n, int target)
{

     for (int i = 0; i < n; i++)
     {
          if (arr[i] == target)
          {
               return i;
          }
     }
     return -1;
}

// Binary search TC: O(log n)
int findTargetElement(vector<int> &arr, int n, int target)
{
     sort(arr.begin(), arr.end());
     int start = 0, end = n - 1;

     while (start <= end)
     {
          int mid = start + (end - start) / 2;

          if (arr[mid] == target)
          {
               return mid;
          }
          else if (arr[mid] < target)
          {
               start = mid + 1;
          }
          else
          {
               end = mid - 1;
          }
     }
}

// Reverse an array
// [2,3,6,5,8,4,5]
// TC: O(n)
vector<int> reverseArr(vector<int> &arr, int n)
{
     vector<int> resultArr = {};

     for (int i = n - 1; i >= 0; i--)
     {
          resultArr.push_back(arr[i]);
     }

     return resultArr;
}