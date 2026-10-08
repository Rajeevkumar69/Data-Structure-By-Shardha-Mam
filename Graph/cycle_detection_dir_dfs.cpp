#include <iostream>
#include <vector>
#include <list>
#include <queue>
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
     }

     bool isCycleDirDFS(int curr, vector<bool> &vis, vector<bool> &recPath)
     {
          vis[curr] = true;
          recPath[curr] = true;

          for (auto v : l[curr])
          {
               if (!vis[v])
               {
                    if (isCycleDirDFS(v, vis, recPath))
                    {
                         return true;
                    }
               }
               else if (recPath[v])
               {
                    return true;
               }
          }
          recPath[curr] = false;
          return false;
     }

     bool isCycle()
     {
          vector<bool> vis(V, false);
          vector<bool> recPath(V, false);

          for (int i = 0; i < V; i++)
          {
               if (!vis[i])
               {
                    if (isCycleDirDFS(i, vis, recPath))
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
     Graph g(4);

     g.addEdges(1, 0);
     g.addEdges(0, 2);
     g.addEdges(2, 3);
     g.addEdges(3, 0);

     bool result = g.isCycle();
     cout << result;

     return 0;
}