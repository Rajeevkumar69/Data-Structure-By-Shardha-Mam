#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
     for (int i = size - 1; i >= 0; i--)
     {
          cout << arr[i] << " ";
     }
}

//  Two pointers approach

void reversseArr(int arr[], int size)
{
     int start = 0, end = size - 1;
     while (start < end)
     {
          swap(arr[start], arr[end]);
          start++;
          end--;
     }
}

int main()
{
     int numsArr[] = {10, 20, 30, 60};
     int size = sizeof(numsArr) / sizeof(numsArr[0]);

     reverseArray(numsArr, size);
     reversseArr(numsArr, size);
     for (int i = 0; i < size; i++)
     {
          cout << numsArr[i] << " ";
     }

     return 0;
}