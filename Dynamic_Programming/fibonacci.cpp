#include <iostream>
#include <vector>
using namespace std;

// Fibonacci using Recursion
int fib(int n)
{
     // Base Case: If n is 0 or 1, return n itself
     if (n <= 1)
          return n;

     // Recursive Case: Sum of previous two Fibonacci numbers
     return fib(n - 1) + fib(n - 2);
}

// Fibonacci using DP (Memoization)
int fibDP(int n, vector<int> &f)
{
     // Base Case: If n is 0 or 1, return n itself
     if (n <= 1)
          return n;

     // Step 1: Check if the result is already calculated
     // If yes, return the stored result to avoid recalculation
     if (f[n] != -1)
     {
          return f[n];
     }

     // Step 2: Calculate the result using smaller subproblems
     // Step 3: Store the result in the vector and return it
     return f[n] = fibDP(n - 1, f) + fibDP(n - 2, f);
}

// Fibonacci using DP (Tabulation)

int fibTabDP(int n)
{
     vector<int> dp(n + 1);

     dp[0] = 0;
     dp[1] = 1;

     for (int i = 2; i <= n; i++)
     {
          dp[i] = dp[i - 1] + dp[i - 2];
     }
     return dp[n];
}

int main()
{
     int n = 6;

     // Step 1: Create a DP vector of size n + 1
     // Step 2: Initialize all values with -1 (means not calculated yet)
     vector<int> f(n + 1, -1);

     // Step 3: Calculate and print the nth Fibonacci number
     cout << fibDP(n, f);

     return 0;
}

/*

Approach	          Time Complexity	Space Complexity
Recursion(fib)	     O(2^n)	          O(n)
DP(fibDP)	          O(n)	               O(n)

Why?
- Recursion: Recalculates the same Fibonacci values multiple times, resulting in exponential time. The recursion stack takes O(n) space.
- Memoization: Calculates each Fibonacci value only once and stores it in the DP vector. The vector takes O(n) space, and the recursion stack also takes O(n) space.
Remember: Memoization = Recursion + Storage of already calculated results.

*/