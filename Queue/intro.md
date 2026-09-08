# Queue

* A queue in C++ is a linear data structure that follows the FIFO (First In, First Out) principle.

- This means that the first element added to the queue will be the first one to be removed.

## Key Operations & Member Functions

All primary operations on a C++ STL queue take **O(1) time complexity**.

| Function   | Traditional Name | Description |
|------------|------------------|-------------|
| `push()`   | Enqueue          | Inserts a new element at the **back** (rear) of the queue. |
| `pop()`    | Dequeue          | Removes the element from the **front** of the queue (does not return it). |
| `front()`  | Peek             | Returns a reference to the element at the **front** of the queue. |
| `back()`   | -                | Returns a reference to the element at the **back** of the queue. |
| `empty()`  | isEmpty          | Returns `true` if the queue contains no elements, otherwise `false`. |
| `size()`   | -                | Returns the total number of elements currently in the queue. |


cpp code
```
#include <iostream>
#include <queue>

int main() {
     queue<int> myQueue;

     myQueue.push(10);
     myQueue.push(20);
     myQueue.push(30);

     myQueue.front() << std::endl;
     myQueue.back() << std::endl;
     myQueue.size() << std::endl;
     
     while (!myQueue.empty()) {
          myQueue.front() << " ";
          myQueue.pop();
     }

     return 0;
}
```