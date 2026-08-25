#include <iostream>
#include <vector>
using namespace std;

vector<int> removeElement(vector<int> &arr, int target)
{
     int n = arr.size();

     for (int i = 0; i < n; i++)
     {
          if (arr[i] == target)
          {
               arr.erase(arr.begin() + i);
               return arr;
          }
     }
     return arr;
}

vector<int> updateArray(vector<int> &arr, int target, int newElement)
{
     int n = arr.size();

     for (int i = 0; i < n; i++)
     {
          if (arr[i] == target)
          {
               arr[i] = newElement;
               return arr;
          }
     }
     return arr;
}

int main()
{
     vector<int> arr = {2, 5, 4, 8, 7, 9};
     int target = 4;

     vector<int> result = removeElement(arr, target);

     for (int val : result)
     {
          cout << val << " ";
     }

     cout << "\n";
     vector<int> result2 = updateArray(arr, target, 12);

     for (int i : result2)
     {
          cout << i << " ";
     }

     return 0;
}