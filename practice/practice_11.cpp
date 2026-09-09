#include <iostream>
#include <vector>
using namespace std;

int returnSum(vector<int> &arr)
{
     int sum = 0, n = arr.size();

     for (int i = 0; i < n; i++)
     {
          sum += arr[i];
     }
     return sum;
}

int main()
{
     vector<int> arr = {1, 2, 3, 5, 6};
     cout << returnSum(arr);
     return 0;
}