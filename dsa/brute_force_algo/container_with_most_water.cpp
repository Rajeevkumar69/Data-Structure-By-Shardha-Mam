#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int calculateWaterContainer(vector<int> height)
{
     int maxWater = 0;
     int size = height.size();
     int w = 0, h = 0, area = 0;

     for (int i = 0; i < size; i++)
     {
          for (int j = i + 1; j < size; j++)
          {
               w = j - i;
               h = min(height[i], height[j]);
               area = h * w;
               maxWater = max(maxWater, area);
          }
     }
     return maxWater;
}

int main()
{
     vector<int> containers = {7, 1, 5, 4, 3};

     int result = calculateWaterContainer(containers);
     cout << result;

     return 0;
}