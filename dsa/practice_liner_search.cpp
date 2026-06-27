#include <iostream>
#include <vector>
using namespace std;

int searchTarget(vector<int> arr, int tar)
{

     for (int i = 0; i <= arr.size(); i++)
     {
          if (arr[i] == tar)
          {
               return i;
          }
     }
     return -1;
}

int main()
{
     vector<int> arr = {1, 2, 6, 5, 4, 8};
     int target = 5;
     cout << searchTarget(arr, target);
     return 0;
}