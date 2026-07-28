#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
     vector<int> nums = {
         -2,
         -1,
         -1,
         1,
         1,
         2,
         2,
     };
     set<vector<int>> s;

     int n = nums.size();
     vector<vector<int>> ans;

     sort(nums.begin(), nums.end());

     for (int i = 0; i < n; i++)
     {
          for (int j = i + 1; j < n; j++)
          {
               for (int k = j + 1; k < n; k++)
               {
                    for (int l = k + 1; l < n; l++)
                    {
                         if (nums[i] + nums[j] + nums[k] + nums[l] == 0)
                         {
                              vector<int> trip = {nums[i], nums[j], nums[k], nums[l]};
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
     }

     for (auto &trip : ans)
     {
          for (int x : trip)
          {
               cout << x << " ";
          }
          cout << "\n";
     }

     return 0;
}