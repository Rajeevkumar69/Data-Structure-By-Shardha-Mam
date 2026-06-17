#include <iostream>
#include <vector>
using namespace std;

int main()
{

     vector<int> vec = {1, 2, 3};
     vector<char> name = {'c', 'h', 'a', 'm', 'c', 'h', 'a', 'm'};

     cout << vec.size() << endl;

     for (char i : name)
     {
          cout << i;
     }
     return 0;
}