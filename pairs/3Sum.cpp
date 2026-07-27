#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
     vector<int> nums = {-1, 0, 1, 2, -1, -4};
     int target = 0, n = nums.size();

     set<vector<int>> s;
     vector<vector<int>> ans;

     for (int i = 0; i < n; i++)
     {
          for (int j = i + 1; j < n; j++)
          {
               for (int k = j + 1; k < n; k++)
               {
                    if (nums[i] + nums[j] + nums[k] == target)
                    {
                         vector<int> trip = {nums[i], nums[j], nums[k]};
                         sort(trip.begin(), trip.end());

                         if (s.find(trip) == s.end())
                         {
                              s.insert(trip);
                              ans.push_back(trip);
                         }
                    }
               }
          }
     }

     for (auto &trip : ans)
     {
          for (int x : trip)
               cout << x << " ";
          cout << endl;
     }

     return 0;
}