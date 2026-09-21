# Binary Tree in C++

A **binary tree** is a hierarchical data structure where each node can have a maximum of two children, referred to as the **left child** and **right child**.

## Node Structure

In C++, a binary tree can be represented using a `struct` or `class`. Each node contains:

- `data` — stores the value.
- `left` — pointer to the left child.
- `right` — pointer to the right child.

```cpp
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val){
          data = val;
          left = right = NULL;
     }
};
```

# Complete Implementation

```cpp code
#include <iostream>
using namespace std;

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) : data(value), left(nullptr), right(nullptr) {}
};

void printPreorder(TreeNode* node) {
    if (node == nullptr) return;

    cout << node->data << " ";
    printPreorder(node->left);
    printPreorder(node->right);
}

void printInorder(TreeNode* node) {
    if (node == nullptr) return;

    printInorder(node->left);
    cout << node->data << " ";
    printInorder(node->right);
}

void printPostorder(TreeNode* node) {
    if (node == nullptr) return;

    printPostorder(node->left);
    printPostorder(node->right);
    cout << node->data << " ";
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);

    cout << "Preorder: ";
    printPreorder(root);

    cout << "\nInorder: ";
    printInorder(root);

    cout << "\nPostorder: ";
    printPostorder(root);

    return 0;
}
```