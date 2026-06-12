#include <iostream>
#include <string>
using namespace std;

int main()
{
     // Swap two numbers with & without temp variable
     int numberOne, numberTwo, temp;

     cout << "Enter Two Numbers:\n";
     cin >> numberOne >> numberTwo;

     // temp = numberTwo;
     // numberTwo = numberOne;
     // numberOne = temp;

     numberOne = numberOne + numberTwo;
     numberTwo = numberOne - numberTwo;
     numberOne = numberOne - numberTwo;

     cout << numberOne << " " << numberTwo;

     return 0;

     // //  take a temp in Celcious & give out in Fahrenhit (9.5 / 3.5) * 32.0

     double temperature_celsius, temperature_fahrenheit;

     cout << "Enter temprature in celcious:\n";
     cin >> temperature_celsius;

     temperature_fahrenheit = temperature_celsius * (9.0 / 5.0) + 32.0;
     cout << temperature_fahrenheit;
     return 0;

     // // Take user input N & print it's table from 1 to 12
     int userInput;

     cout << "Enter a number:\n";
     cin >> userInput;

     for (int i = 1; i <= 12; i++)
     {
          cout << userInput * i << " ";
     }

     return 0;

     // //  calculate total number of digits using loop

     string strInput;
     int totalDigits = 0;

     cout << "Enter digits:\n";
     cin >> strInput;

     for (int i = 0; i <= strInput.length() - 1; i++)
     {
          totalDigits++;
     }
     cout << totalDigits;
     return 0;

     // // calculate the factorial of number N;

     int number;
     int factorial = 1;

     cout << "Enter a number:\n";
     cin >> number;

     for (int i = 1; i <= number; i++)
     {
          factorial *= i;
     }
     cout << factorial;

     return 0;

     // write a program to take user inout range from a to e & print all the character bw these alongside ASKII code.

     char firstCharacter, lastCharacter;
     cout << "Enter two charcter: \n";
     cin >> firstCharacter >> lastCharacter;

     for (int i = firstCharacter; i <= lastCharacter; i++)
     {
          cout << char(i) << " : " << i << endl;
     }
     return 0;
}