#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int containerWithMostWater(vector<int> height)
{
     int maxWater = 0;
     int lp = 0, rp = height.size() - 1;

     while (lp < rp)
     {
          int wt = rp - lp;
          int ht = min(height[lp], height[rp]);
          int area = ht * wt;
          maxWater = max(maxWater, area);

          height[lp] < height[rp] ? lp++ : rp--;
     }
     return maxWater;
}

int main()
{
     vector<int> containers = {10, 200, 123, 1254, 12254, 122};
     int result = containerWithMostWater(containers);

     cout << result;
     return 0;
}