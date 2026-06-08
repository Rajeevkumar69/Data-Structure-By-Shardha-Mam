#include <iostream>
using namespace std;

int main()
{
     double a, b;
     int userInput;

     cout << "Basic Calculator " << endl;
     cout << "Enter 1st value: ";
     cin >> a;
     cout << "\nChoose the option: 1. Add 2. Sub 3. Mul 4. Div" << endl;
     cin >> userInput;
     cout << "\nEnter 2nd value: " << endl;
     cin >> b;

     if (userInput == 1)
     {
          cout << "Addition is: " << (a + b);
     }
     else if (userInput == 2)
     {
          cout << "Sub is: " << (a - b);
     }
     else if (userInput == 3)
     {
          cout << "Mul is: " << (a * b);
     }
     else if (userInput == 4)
     {
          cout << "Div is: " << (a / b);
     }
     else
     {
          cout << "Choose valid option" << endl;
     }

     return 0;
}