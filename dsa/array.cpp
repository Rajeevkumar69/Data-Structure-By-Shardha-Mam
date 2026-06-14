#include <iostream>
using namespace std;

int findSmallest()
{

     int marks[5];
     int result = INT_MAX;

     cout << "Enter 5 students marks:\n";

     for (int i = 0; i < 5; i++)
     {
          cin >> marks[i];
     }

     for (int i = 0; i <= 5; i++)
     {
          if (marks[i] < result)
          {
               result = marks[i];
          }
     }

     return result;
}

int findLargest()
{

     int marks[5];
     int result = INT_MIN;

     cout << "Enter 5 students marks:\n";

     for (int i = 0; i < 5; i++)
     {
          cin >> marks[i];
     }

     for (int i = 0; i <= 5; i++)
     {
          if (marks[i] > result)
          {
               result = marks[i];
          }
     }

     return result;
}

int main()
{
     cout << findSmallest();
     cout << findLargest();
     return 0;
}