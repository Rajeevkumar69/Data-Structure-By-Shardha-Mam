#include <iostream>
#include <vector>
using namespace std;

vector<int> insertionSort(vector<int> arr)
{
     int size = arr.size();
     for (int i = 1; i < size; i++)
     {
          int current = i, prev = i - 1;
          while (prev >= 0 && arr[prev] > current)
          {
               arr[prev + 1] = arr[prev];
               prev--;
          }
          arr[prev + 1] = current;
     }
     return arr;
}

int main()
{
     vector<int> nums = {1, 5, 4, 2, 3, 6, 2};
     vector<int> result = insertionSort(nums);

     for (int value : result)
     {
          cout << value << " ";
     }
     return 0;
}