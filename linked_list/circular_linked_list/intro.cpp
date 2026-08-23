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

class CircularLL
{
public:
     Node *head;
     Node *tail;

     CircularLL()
     {
          head = tail = NULL;
     }

     void insertAtHead(int val)
     {
          Node *newNode = new Node(val);

          if (head == NULL)
          {
               head = tail = newNode;
               tail->next = head;
          }
          else
          {
               newNode->next = head;
               head = newNode;
               tail->next = head;
          }
     }

     void insertAtTail(int val)
     {
          Node *newNode = new Node(val);

          if (head == NULL)
          {
               head = tail = newNode;
               tail->next = head;
          }
          else
          {
               tail->next = newNode;
               tail = newNode;
               tail->next = head;
          }
     }

     void deleteAtHead()
     {

          if (head == NULL)
          {
               delete head;
               head = tail = NULL;
          }
          else
          {
               Node *temp = head;
               head = head->next;
               tail->next = head;
               delete temp;
          }
     }

     void deleteAtTail()
     {
          if (head == NULL)
          {
               return;
          }
          else if (head == tail)
          {
               delete tail;
               head = tail = NULL;
          }
          else
          {

               Node *temp = tail;
               Node *prev = head;

               while (prev->next != tail)
               {
                    prev = prev->next;
               }
               tail = prev;
               tail->next = head;
               temp->next = NULL;
               delete temp;
          }
     }

     void print()
     {
          Node *temp = head;

          if (head == NULL)
               return;

          do
          {
               cout << temp->data << " ";
               temp = temp->next;
          } while (temp != head);
     }
};

int main()
{
     CircularLL cll;

     cll.insertAtHead(1);
     cll.insertAtHead(2);

     cll.insertAtTail(5);
     cll.insertAtTail(9);

     cll.deleteAtHead();

     cll.deleteAtTail();

     cll.print();

     return 0;
}