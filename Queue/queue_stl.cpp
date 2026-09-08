#include <iostream>
#include <queue>
using namespace std;

int main()
{
     queue<int> q1;

     q1.push(10);
     q1.push(102);
     q1.push(18);

     cout << "Size:" << q1.size() << "\n";

     while (!q1.empty())
     {
          cout << q1.front() << " ";
          q1.pop();
     }

     return 0;
}