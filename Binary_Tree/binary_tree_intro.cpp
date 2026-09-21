#include <iostream>
#include <vector>
#include <queue>
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

// Preorder Traversal

void preOrderTraversal(Node *root)
{
     if (root == NULL)
     {
          return;
     }
     cout << root->data << " ";
     preOrderTraversal(root->left);
     preOrderTraversal(root->right);
}

void inOrderTraversal(Node *root)
{
     if (root == NULL)
     {
          return;
     }

     inOrderTraversal(root->left);
     cout << root->data << " ";
     inOrderTraversal(root->right);
}

// Post Order Traversal

void postOrderTraversal(Node *root)
{
     if (root == NULL)
     {
          return;
     }

     postOrderTraversal(root->left);
     postOrderTraversal(root->right);
     cout << root->data << " ";
}

// Level Order Traversal

void levelOrderTraversal(Node *root)
{
     queue<Node *> q;
     q.push(root);
     q.push(NULL);

     while (q.size() > 0)
     {
          Node *curr = q.front();
          q.pop();

          if (curr == NULL)
          {
               if (!q.empty())
               {
                    cout << "\n";
                    q.push(NULL);
                    continue;
               }
               else
               {
                    break;
               }
          }
          cout << curr->data << " ";

          if (curr->left != NULL)
          {
               q.push(curr->left);
          }
          if (curr->right != NULL)
          {
               q.push(curr->right);
          }
     }
}

int main()
{
     vector<int> preOrder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

     Node *root = buildTree(preOrder);

     // cout << root->data << "\n";

     // cout << root->right->left->data << "\n";

     // preOrderTraversal(root);
     // inOrderTraversal(root);
     // postOrderTraversal(root);

     levelOrderTraversal(root);

     return 0;
}

/*
TC: O(n)
*/