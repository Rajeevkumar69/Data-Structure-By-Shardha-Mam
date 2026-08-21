int mat[3][3] = {{1, 2, 3}, {8, 5, 2}, {3, 6, 8}}

15

    int sum = 0;
int m = mat[0].size();

for (int j = 0; j < m; j++)
{
     sum += mat[1][j];
}

return sum;

vector<vector<int>> mat = {{2, 1, 3}, {5, 4, 7}};

int n = mat.size();
int m = mat[0].size();

vector < vector << int >> result = (m, vector<int>(n));

for (int i = 0; i < n; i++)
{
     for (int j = 0; j < m; j++)
     {
          result[j][i] = mat[i][j];
     }
}
return result;

//  Find the middle of linked list

ListNode *slow = head;
ListNode *fast = head;

while (fast != NULL || fast->next != NULL)
{
     slow = slow->next;
     fast = fast->next->next;
}
return slow;

// Check if LL is cyclic or not

ListNode *slow = head;
ListNode *fast = head;

while (fast != NULL && fast->next != NULL)
{
     slow = slow->next;
     fast = fast->next->next;

     if (fast == slow)
     {
          return true;
     }
}
return false;

//  Break the cyclic LL

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
     }
}

if (!isCycle)
{
     return head;
}

slow = head;
ListNode *prev = NULL;
while (slow != fast)
{
     slow = slow->next;
     prev = fast;
     fast = fast->next;
}
prev->next = NULL;
return head;

// delete the middle node in LL

ListNode *slow = head;
ListNode *fast = head;
ListNode *prev = NULL;

while (fast != NULL && fast->next != NULL)
{
     prev = slow;
     slow = slow->next;
     fast = fast->next->next;
}

prev->next = slow->next;
delete slow;
return head;

// int arr = [2,5,6,7,8,9] target = 8

int start = 0, end = n - 1;

while (start <= end)
{
     int mid = start + (end - start) / 2;

     if (arr[mid] == target)
     {
          return mid;
     }
     else if (arr[start] <= target)
     {
          start = mid + 1;
     }
     else
     {
          end = end - 1;
     }
}
return -1;

//  int arr = [5,6,7,8,1,2,3,4] int target = 3

int n = arr.size();
int start = 0, end = n - 1;

while (start <= end)
{
     int mid = start + (end - start) / 2;

     if (arr[mid] == target)
     {
          return mid;
     }

     if (arr[start] <= arr[mid])
     {
          if (arr[start] <= target && target <= arr[mid])
          {
               end = mid - 1;
          }
          else
          {
               start = mid + 1;
          }
     }
     else
     {
          if (arr[mid] <= target && target <= arr[end])
          {
               start = mid + 1;
          }
          else
          {
               end = mid - 1;
          }
     }
}
return -1;

//  find the factorial

int num = 3; // 3*2*1 = 6
int fact = 1;

for (int i = num; i >= 1; i--)
{
     fact *= i;
}

return fact;

// factorial using recursion
int fact(int num)
{
     if (num == 0 || nums == 1)
     {
          return 1;
     }
     return num * fact(num - 1);
}

//  print  Sub array   & it's sum
//  int arr = {2,3,6,4}
/*
2364, 364, 64, 4
364, 64, 4
64, 4
4
*/

int maxSum = INT_MIN;
for (int i = 0; i < n; i++)
{
     int currSum = arr[i];
     for (int j = i + 1; j < n; j++)
     {

          currSum += arr[j];
          maxSum = max(maxSum, currSum);
     }
}
return maxSum;

for (int start = 0; start < n; start++)
{
     for (int end = start; end < n; end++)
     {

          for (int i = start; i <= end; i++)
          {
               cout << arr[i];
          }
     }
}

//  2 Sum

//  int arr = [2,3,6,5,4,3] int target = 11

for (int i = 0; i < n; i++)
{
     for (int j = i + 1; j < n; j++)
     {
          if (arr[i] + arr[j] == target)
          {
               return {i, j};
          }
     }
}
return {-1, -1};

//  If array is sorted
int start = 0, end = n - 1;
bool found = false;

while (start < end)
{
     int sum = arr[start] + arr[end];

     if (sum == target)
     {
          found = true;
          break;
     }
     else if (sum <= target)
     {
          start++;
     }
     else
     {
          end--;
     }
}
if (!found)
{
     cout << -1;
}