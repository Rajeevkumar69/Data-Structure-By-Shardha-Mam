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

class Queue
{
     Node *head;
     Node *tail;

public:
     Queue()
     {
          head = tail = NULL;
     }

     void push(int data)
     {
          Node *newNode = new Node(data);
          if (isEmpty())
          {
               head = tail = newNode;
          }
          else
          {
               tail->next = newNode;
               tail = newNode;
          }
     }

     void pop()
     {
          if (isEmpty())
          {
               cout << "Queue is empty";
               return;
          }
          Node *temp = head;
          head = head->next;
          delete temp;
     }

     int front()
     {
          if (isEmpty())
          {
               return -1;
          }
          return head->data;
     }

     bool isEmpty()
     {
          return head == NULL;
     }
};

int main()
{
     Queue q1;

     q1.push(12);
     q1.push(10);
     q1.push(120);

     while (!q1.isEmpty())
     {
          cout << q1.front() << " ";
          q1.pop();
     }
     return 0;
}