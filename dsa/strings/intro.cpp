#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

int main()
{
     char arr[] = {'a', 'b', 'c'};
     vector<char> str = {'a', 'b', 'c'};

     for (char value : str)
     {
          cout << value << " ";
     }

     cout << arr << endl;

     return 0;
}