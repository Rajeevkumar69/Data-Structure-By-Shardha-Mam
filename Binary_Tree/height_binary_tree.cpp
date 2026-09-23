// Calculate the height of Binary Tree

#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
     int data;
     Node *left;
     Node *right;

     Node(int val)
     {
          data = val;
          left = right = NULL;
     }
};

static int idx = -1;

Node *buildTree(vector<int> preOrder)
{
     idx++;
     if (preOrder[idx] == -1)
     {
          return NULL;
     }

     Node *root = new Node(preOrder[idx]);
     root->left = buildTree(preOrder);
     root->right = buildTree(preOrder);
     return root;
}

// Height of the tree

int height(Node *root)
{
     if (root == NULL)
     {
          return 0;
     }

     int leftHt = height(root->left);
     int rightHt = height(root->right);
     return max(leftHt, rightHt) + 1;
}

int main()
{
     vector<int> arr = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

     Node *root = buildTree(arr);

     cout << "Height: " << height(root);
     return 0;
}