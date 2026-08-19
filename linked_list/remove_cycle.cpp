#include <iostream>
using namespace std;

/*
In this pseudo code there's three question solutions:-

1. Detect if our LL is Cyclic or not. If so, return true, else false.
2. Detect if LL is cyclic. If so, then break the Cyclic LL.

So to solve this kind of problem, we can use our slow-fast approach.

Basically, we can initialize two `ListNode*`:

ListNode* slow = head;
ListNode* fast = head;

We run the while loop till:

while(fast != NULL && fast->next != NULL)

So slow moves +1 node & fast moves +2 nodes.

slow = slow->next;
fast = fast->next->next;

If `slow == fast`, it means the LL is cyclic because fast has again reached a node which slow has already reached.

So we can make `isCycle = true` and come out of the loop.

Now, to find the starting point of the cycle, we can reset:

slow = head;

while(slow != fast){
    slow = slow->next;
    fast = fast->next;
}

Now `slow` and `fast` will meet at the starting point of the cycle.

return slow;
Now to break the cycle,

we can take another:

ListNode* prev = NULL;

While finding the starting point of the cycle:

while(slow != fast){
    slow = slow->next;
    prev = fast;
    fast = fast->next;
}

After finding the starting point, we need to make the previous node's `next` point to `NULL`:

prev->next = NULL;

So it'll break the cyclic form, meaning the last node will now point to `NULL`.

3. We can also find the mid node & delete the mid node and make the new LL and return the head.

So for this, we apply the same slow-fast approach to find the mid node.

Here we need to take one more:

ListNode* prev = NULL;

Inside the loop, before slow moves, we make:

prev = slow;

After the loop, we make:

prev->next = slow->next;
delete slow;

Because `slow` is our mid node.

Then:

return head;

*/

class ListNode
{
public:
     int val;
     ListNode *next;

     ListNode(int val)
     {
          this->val = val;
          next = NULL;
     }
};

ListNode *removeCycle(ListNode *head)
{
     // To find if the LL is cyclic or not
     ListNode *slow = head;
     ListNode *fast = head;
     bool isCycle = false;

     while (fast != NULL && fast->next != NULL)
     {
          slow = slow->next;
          fast = fast->next->next;

          if (fast == slow)
          {
               isCycle = true;
               break;
          }
     }

     if (!isCycle)
     {
          return NULL;
     }

     slow = head;

     while (fast != slow)
     {
          slow = slow->next;
          fast = fast->next;
     }
     return head;

     //  To break the LL Cycle
     ListNode *prev = NULL;

     while (fast != slow)
     {
          slow = slow->next;

          prev = fast;
          fast = fast->next;
     }

     prev->next = NULL;

     return head;
}

int main()
{

     ListNode *head = new ListNode(1);
     head->next = new ListNode(2);
     head->next->next = new ListNode(3);
     head->next->next->next = new ListNode(4);
     head->next->next->next->next = new ListNode(5);

     head->next->next->next->next->next = head->next;

     head = removeCycle(head);

     ListNode *temp = head;

     while (temp != NULL)
     {
          cout << temp->val << " ";
          temp = temp->next;
     }

     return 0;
}