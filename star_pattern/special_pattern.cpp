#include <iostream>
#include <string>
using namespace std;

int main()
{
     string str = "CHAMCHAMLOVERAJEEV";

     for (int i = 0; i < str.length(); i++)
     {
          cout << str[i] << " ";

          if ((i + 1) % 4 == 0)
          {
               cout << endl;
          }
     }
     return 0;
}