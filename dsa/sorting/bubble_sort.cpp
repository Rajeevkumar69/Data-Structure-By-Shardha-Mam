#include <iostream>
#include <vector>
using namespace std;

vector<int> bubbleSort(vector<int> arr)
{
     int size = arr.size();
     for (int i = 0; i < size - 1; i++)
     {
          for (int j = 0; j < size - i - 1; j++)
          {
               if (arr[j] > arr[j + 1])
               {
                    swap(arr[j], arr[j + 1]);
               }
          }
     }
     return arr;
}
int main()
{
     vector<int> nums = {2, 3, 5, 4, 8, 1};
     vector<int> result = bubbleSort(nums);

     for (int value : result)
     {
          cout << value << " ";
     }

     return 0;
}