#include <iostream>
using namespace std;

int main()
{
     int size = 6;
     double nums[] = {-140, 12, -12, -1124, -16, 18};

     int smallestIndex = 0;

     for (int i = 0; i < size; i++)
     {
          if (nums[i] < nums[smallestIndex])
          {
               smallestIndex = i;
          }
     }

     cout << smallestIndex;

     return 0;
}