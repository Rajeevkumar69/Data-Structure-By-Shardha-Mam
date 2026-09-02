# Stack

## A stack is a linear data structure that follows the LIFO (Last In, First Out) principle, meaning the last element added to the stack is the first one to be removed.

### Key Stack Operations

* push() — Adds an element to the top of the stack

* pop() — Removes the top element from the stack

* top() — Returns the value of the top element without removing it

* empty() — Checks if the stack is completely empty

* size() — Returns the number of elements currently in the stack

code
```
#include <iostream>
#include <stack>

int main() {
    stack<int> numbers;

    numbers.push(10);
    numbers.push(20);
    numbers.push(30);

    cout << numbers.size();

    cout << numbers.top();

    cout << numbers.top();
    
     while (!numbers.empty()) {
          cout << numbers.top() << " ";
          numbers.pop(); 
     }

    return 0;
}
```