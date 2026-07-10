#include <iostream>
#include <vector>
using namespace std;

vector<int> getSortedArray(vector<int> A, vector<int> B)
{
     int m = A.size() - B.size();
     int n = B.size();

     int idx = m + n - 1;
     int i = m - 1;
     int j = n - 1;

     while (i >= 0 && j >= 0)
     {
          if (A[i] >= B[j])
          {
               A[idx] = A[i];
               idx--;
               i--;
          }
          else
          {
               A[idx] = B[j];
               idx--;
               j--;
          }
     }

     while (j >= 0)
     {
          A[idx] = B[j];
          idx--;
          j--;
     }
     return A;
}

int main()
{
     vector<int> arrOne = {2, 3, 5, 0, 0, 0};
     vector<int> arrTwo = {1, 2, 3};

     vector<int> result = getSortedArray(arrOne, arrTwo);

     for (int value : result)
     {
          cout << value << " ";
     }
     return 0;
}