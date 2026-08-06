#include <iostream>
#include <vector>
using namespace std;

// Brute-Force Approach O(n*n)
int countInv(vector<int> &arr, int n)
{
     int count = 0;
     for (int i = 0; i < n; i++)
     {
          for (int j = i + 1; j < n; j++)
          {
               if (arr[i] > arr[j])
               {
                    count++;
               }
          }
     }
     return count;
}

int main()
{
     vector<int> arr = {6, 3, 5, 2, 7};
     int n = arr.size() - 1;

     int invCount = countInv(arr, n);
     cout << invCount;
     return 0;
}