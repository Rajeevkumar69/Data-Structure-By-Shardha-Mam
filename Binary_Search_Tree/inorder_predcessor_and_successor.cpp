// Find InOrder Predessor & Successor in BST

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

Node *rightMostLeftSubTree(Node *root)
{
     Node *ans;

     while (root != NULL)
     {
          ans = root;
          root = root->right;
     }
     return ans;
}

Node *leftMostRightSubTree(Node *root)
{
     Node *ans;

     while (root != NULL)
     {
          ans = root;
          root = root->left;
     }
     return root;
}

vector<int> getPredSucc(Node *root, int key)
{
     Node *curr = root;
     Node *pred = NULL;
     Node *succ = NULL;

     while (curr != NULL)
     {
          if (key < curr->data)
          {
               succ = curr;
               curr = curr->left;
          }
          else if (key > curr->data)
          {
               pred = curr;
               curr = curr->right;
          }
          else
          {
               if (curr->left != NULL)
               {
                    pred = rightMostLeftSubTree(curr->left);
               }
               if (curr->right != NULL)
               {
                    succ = leftMostRightSubTree(curr->right);
               }
               break;
          }
     }
     return {pred->data, succ->data};
}

int main()
{

     Node *root = new Node(6);
     root->left = new Node(4);
     root->right = new Node(8);

     root->left->left = new Node(1);
     root->left->right = new Node(5);
     root->right->left = new Node(7);
     root->right->right = new Node(9);

     int key = 7;
     vector<int> ans = getPredSucc(root, key);

     cout << "Pred: " << ans[0] << "\n";
     cout << "Succ: " << ans[1];

     return 0;
}