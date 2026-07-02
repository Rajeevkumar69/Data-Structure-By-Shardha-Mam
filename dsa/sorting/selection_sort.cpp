#include <iostream>
#include <vector>
using namespace std;

vector<int> selectionSort(vector<int> arr)
{
     int size = arr.size();

     for (int i = 0; i < size - 1; i++)
     {
          int smallestIndex = i;
          for (int j = i + 1; j < size; j++)
          {
               if (arr[j] < arr[smallestIndex])
               {
                    smallestIndex = j;
               }
          }
          swap(arr[i], arr[smallestIndex]);
     }
     return arr;
}

int main()
{
     vector<int> nums = {2, 3, 6, 4, 8, 1};
     vector<int> result = selectionSort(nums);

     for (int value : result)
     {
          cout << value << " ";
     }
     return 0;
}