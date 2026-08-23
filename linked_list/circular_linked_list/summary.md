# Circular Linked List

* A circular linked list in C++ is a linear data structure where the last node points back to the first node (head) instead of pointing to NULL.

* a linear data structure where the last node points back to the first node (head) instead of pointing to NULL. This structural change creates a closed, continuous loop, meaning you can traverse the entire list starting from any arbitrary node.

code
```
class Node {
public:
    int data;       // Stores the value
    Node* next;     // Points to the next node (or back to head)

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
```