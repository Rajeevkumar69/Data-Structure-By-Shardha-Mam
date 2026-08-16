#include <iostream>
using namespace std;

class Node
{
public:
     int data;
     Node *next;

     Node(int val)
     {
          data = val;
          next = NULL;
     }
};

class LL
{
public:
     Node *head;

     LL()
     {
          head = NULL;
     }

     void push_back(int val)
     {
          Node *newNode = new Node(val);

          if (head == NULL)
          {
               head = newNode;
               return;
          }

          Node *temp = head;
          while (temp->next != NULL)
          {
               temp = temp->next;
          }
          temp->next = newNode;
     }

     void pop_back()
     {
          if (head == NULL)
          {
               return;
          }

          if (head->next == NULL)
          {
               delete head;
               head = NULL;
               return;
          }
          Node *temp = head;
          while (temp->next->next != NULL)
          {
               temp = temp->next;
          }
          delete temp->next;
          temp->next = NULL;
     }

     void push_front(int val)
     {
          Node *newNode = new Node(val);

          newNode->next = head;
          head = newNode;
     }

     void pop_front()
     {
          if (head == NULL)
          {
               return;
          }

          Node *temp = head;
          head = head->next;
          delete temp;
     }

     void insert(int val, int idx)
     {
          if (idx == 0)
          {
               push_front(val);
               return;
          }
          Node *temp = head;

          for (int i = 0; i < idx - 1 && temp != NULL; i++)
          {
               temp = temp->next;
          }
          if (temp == NULL)
          {
               return;
          }
          Node *newNode = new Node(val);
          newNode->next = temp->next;
          temp->next = newNode;
     }

     void erase(int idx)
     {
          if (head == NULL)
          {
               return;
          }
          if (idx == 0)
          {
               pop_front();
               return;
          }
          Node *temp = head;

          for (int i = 0; i < idx - 1 && temp != NULL; i++)
          {
               temp = temp->next;
          }

          if (temp == NULL || temp->next == NULL)
          {
               return;
          }

          Node *del = temp->next;
          temp->next = del->next;
          delete del;
     }

     void print()
     {
          Node *temp = head;
          while (temp != NULL)
          {
               cout << temp->data << " ";
               temp = temp->next;
          }
          cout << "\n";
     }
};

int main()
{
     LL l1;
     l1.push_back(10);
     l1.push_back(20);
     l1.push_back(30);
     l1.push_back(40);

     l1.print();

     l1.pop_back();
     l1.print();

     l1.push_front(5);
     l1.print();

     l1.pop_front();
     l1.print();

     l1.insert(15, 1);
     l1.print();

     l1.erase(2);
     l1.print();
     return 0;
}