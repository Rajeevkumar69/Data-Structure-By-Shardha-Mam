// DFS Traversal

#include <iostream>
#include <vector>
#include <list>
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

     void dfsHelper(int u, vector<bool> vis)
     {
          cout << u << " ";
          vis[u] = true;

          for (int v : l[u])
          {
               if (!vis[v])
               {
                    dfsHelper(v, vis);
               }
          }
     }
     void dfs()
     {
          int src = 0;
          vector<bool> vis(V, false);
          dfsHelper(src, vis);
     }
};

int main()
{

     Graph g(5);

     g.addEdges(0, 1);
     g.addEdges(1, 2);
     g.addEdges(1, 3);

     g.addEdges(2, 4);

     g.dfs();

     return 0;
}