#include <iostream>
#include <climits>
using namespace std;

// Function to calculate sum of all array numbers

int sum(int arr[], int size)
{
     int sum = 0;
     for (int i = 0; i < size; i++)
     {
          sum += arr[i];
     }

     return sum;
}

//  Function to swap max & min number of array

void swapNumber(int arr[], int size)
{
     int maxIndex = 0;
     int minIndex = 0;

     for (int i = 1; i < size; i++)
     {
          if (arr[i] > arr[maxIndex])
          {
               maxIndex = i;
          }

          if (arr[i] < arr[minIndex])
          {
               minIndex = i;
          }
     }

     swap(arr[maxIndex], arr[minIndex]);
}

// Function to check unique element in array

void checkUnique(int arr[], int size)
{
     for (int i = 0; i < size; i++)
     {
          for (int j = i + 1; j < size; j++)
          {
               if (arr[i] == arr[j])
               {
                    cout << arr[i] << " ";
               }
          }
     }
}

int main()
{
     int numsArr[] = {10, 20, 45, 12, 20, 10};
     int size = sizeof(numsArr) / sizeof(numsArr[0]);

     // swapNumber(numsArr, size);

     checkUnique(numsArr, size);

     return 0;
}