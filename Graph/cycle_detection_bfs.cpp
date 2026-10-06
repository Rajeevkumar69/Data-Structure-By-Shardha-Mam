// Cycle Detection In Undirected Graph Using BFS
#include <iostream>
#include <queue>
#include <vector>
#include <list>
using namespace std;

class Graph
{
     int V;
     list<int> *l;

public:
     Graph(int v)
     {
          this->V = v;
          l = new list<int>[V];
     }

     ~Graph()
     {
          delete[] l;
     }

     void addEdges(int v, int u)
     {
          l[u].push_back(v);
          l[v].push_back(u);
     }

     bool isCycleUndirBFS(int src, vector<bool> &vis)
     {
          queue<pair<int, int>> q;
          q.push({src, -1});
          vis[src] = true;

          while (!q.empty())
          {
               int u = q.front().first;
               int parU = q.front().second;
               q.pop();

               for (int v : l[u])
               {
                    if (!vis[v])
                    {
                         vis[v] = true;
                         q.push({v, u});
                    }
                    else if (v != parU)
                    {
                         return true;
                    }
               }
          }
          return false;
     }

     bool isCycle()
     {
          vector<bool> vis(V, false);
          for (int i = 0; i < V; i++)
          {
               if (!vis[i])
               {
                    if (isCycleUndirBFS(i, vis))
                    {
                         return true;
                    }
               }
          }
          return false;
     }
};

int main()
{

     Graph g(5);

     g.addEdges(0, 1);
     g.addEdges(0, 2);
     g.addEdges(0, 3);
     g.addEdges(1, 2);
     g.addEdges(3, 4);

     bool res = g.isCycle();
     cout << res;

     return 0;
}