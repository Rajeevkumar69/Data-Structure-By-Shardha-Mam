#include <iostream>
#include <string>
using namespace std;

int main()
{
     string str1 = "hello";

     string str2;

     cout << "Enter string: " << endl;
     getline(cin, str2);

     for (int i = 0; i <= str2.length(); i++)
     {
          cout << str2[i];
     }

     cout << str2.length() << "\n";

     for (char data : str2)
     {
          cout << data << " ";
     }

     return 0;
}