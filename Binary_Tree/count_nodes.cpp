// Count Of Nodes
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

// Count of Nodes

int count(Node *root)
{
     if (root == NULL)
     {
          return 0;
     }
     int leftCount = count(root->left);
     int rightCount = count(root->right);
     return leftCount + rightCount + 1;
}

int main()
{
     vector<int> arr = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

     Node *root = buildTree(arr);

     cout << "Total Nodes: " << count(root);

     return 0;
}