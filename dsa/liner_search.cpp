#include <iostream>
using namespace std;

int linerSearch(int arr[], int size, int target)
{
     for (int i = 0; i < size; i++)
     {
          if (arr[i] == target)
          {
               return i;
          }
     }
     return -1;
}

int main()
{
     int numsArr[] = {10, 12, 15, 16, 14, 18, 120, 126, 46};
     int size = sizeof(numsArr) / sizeof(int);
     int target = 12;

     cout << linerSearch(numsArr, size, target);
     return 0;
}