### Binary Search Tree

* a node-based hierarchical data structure where each node has at most two children and follows a strict ordering property to allow fast searching, insertion, and deletion.

## Key Properties of a BST

*Left Subtree: Contains only nodes with values less than the parent node's value.

*Right Subtree: Contains only nodes with values greater than the parent node's value.

*Subtrees: Every left and right subtree must also be a valid binary search tree.

*Efficiency: Average time complexity for search, insertion, and deletion is \(O(\log n)\), though it can degrade to O(n) if the tree becomes unbalanced.

# Defining a BST Node in C++

code 
```
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    
     Node(int val) {
          data = val;
          left = nullptr;
          right = nullptr;
     }
};
```
##  Basic Operations

• Search: Compare the target value with the current root. If it matches, return it; if smaller, search the left subtree; if larger, search the right subtree.

• Insertion: Traverse the tree like a search operation until you find a nullptr (empty spot), then create and attach the new node there.

• Deletion: Handle three cases: deleting a leaf node, a node with one child, or a node with two children (by replacing with the in-order successor).