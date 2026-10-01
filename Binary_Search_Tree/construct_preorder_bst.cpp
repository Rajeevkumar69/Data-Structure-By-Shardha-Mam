// Construct a preorder BST

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

Node *bstFromPreorder(vector<int> &preorder, int start, int end)
{

     if (start > end)
          return NULL;

     Node *root = new Node(preorder[start]);

     int idx = start + 1;

     while (idx <= end && preorder[idx] < root->data)
          idx++;

     root->left = bstFromPreorder(preorder, start + 1, idx - 1);
     root->right = bstFromPreorder(preorder, idx, end);

     return root;
}

int main()
{

     vector<int> preorder = {6, 3, 1, 4, 8, 9};

     Node *root = bstFromPreorder(preorder, 0, preorder.size() - 1);

     return 0;
}