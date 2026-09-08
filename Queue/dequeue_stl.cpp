#include <iostream>
#include <deque>
using namespace std;

int main()
{
     deque<int> dq;

     dq.push_back(1);
     dq.push_back(2);
     dq.push_back(3);

     dq.push_front(4);

     cout << "Size: " << dq.size() << "\n";

     cout << "Back data: " << dq.front() << "\n";
     cout << "front data: " << dq.back() << "\n";

     while (!dq.empty())
     {
          cout << dq.front() << " ";
          dq.pop_front();
     }
     return 0;
}