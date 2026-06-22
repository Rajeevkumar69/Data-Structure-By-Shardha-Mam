#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int containerWithMostWater(vector<int> height)
{
     int maxWater = 0;
     int size = height.size();

     for (int i = 0; i < size; i++)
     {
          for (int j = i + 1; j < size; j++)
          {
               int wh = j - i;
               int ht = min(height[i], height[j]);
               int area = wh * ht;
               maxWater = max(maxWater, area);
          }
     }
     return maxWater;
}

int main()
{
     vector<int> containers = {7, 5, 4, 8, 9, 12, 6, 5445};

     int result = containerWithMostWater(containers);
     cout << result;
     return 0;
}