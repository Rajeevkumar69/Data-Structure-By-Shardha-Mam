// Disjoint Set Union || With Rank/Size & Path Comparison || Disjoint Set Algorithm

#include <iostream>
#include <vector>
using namespace std;

class DisjointsetUnion
{
public:
     int n;
     vector<int> par, rank;

     DisjointsetUnion(int n)
     {
          this->n = n;
          for (int i = 0; i < n; i++)
          {
               par.push_back(i);
               rank.push_back(0);
          }
     }

     void unionByRank(int a, int b)
     {
          int parA = find(a);
          int parB = find(b);

          if (parA == parB)
               return;

          if (rank[parA] == rank[parB])
          {
               par[parB] = parA;
               rank[parA]++;
          }
          else if (rank[parA] > rank[parB])
          {
               par[parB] = parB;
          }
          else
          {
               par[parA] = parB;
          }
     }

     int find(int x)
     {
          if (par[x] == x)
          {
               return x;
          }
          return find(par[x]);
     }

     void getInfo()
     {
          for (int i = 0; i < n; i++)
          {
               cout << par[i] << " ";
          }
          cout << "\n";
          for (int i = 0; i < n; i++)
          {
               cout << rank[i] << " ";
          }
     }
};

int main()
{
     DisjointsetUnion dsu(6);

     dsu.unionByRank(0, 2);
     cout << dsu.find(2) << endl;

     dsu.unionByRank(1, 3);
     dsu.unionByRank(2, 5);
     dsu.unionByRank(0, 5);

     cout << dsu.find(2) << endl;

     dsu.unionByRank(0, 4);

     dsu.getInfo();
     return 0;
}