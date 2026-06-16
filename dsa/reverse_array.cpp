#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
     for (int i = size - 1; i >= 0; i--)
     {
          cout << arr[i] << " ";
     }
}

int main()
{
     int numsArr[] = {10, 20, 30, 60};
     int size = sizeof(numsArr) / sizeof(numsArr[0]);

     reverseArray(numsArr, size);

     return 0;
}