#include <iostream>
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

int main()
{
     int numsArr[] = {10, 20, 45, 12};
     int size = sizeof(numsArr) / sizeof(int);
     cout << sum(numsArr, size);
     return 0;
}