// Topological Sorting in Graph Using DFS

#include <iostream>
#include <vector>
#include <list>
#include <stack>
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
          l[v].push_back(u);
     }

     void dfs(int curr, vector<bool> &vis, stack<int> &s)
     {
          vis[curr] = true;
          for (auto v : l[curr])
          {
               if (!vis[v])
               {
                    dfs(v, vis, s);
               }
          }
          s.push(curr);
     }

     void topoSort()
     {
          vector<bool> vis(V, false);
          stack<int> s;

          for (int i = 0; i < V; i++)
          {
               if (!vis[i])
               {
                    dfs(i, vis, s);
               }
          }
          while (s.size() > 0)
          {
               cout << s.top() << " ";
               s.pop();
          }
     }
};

int main()
{
     Graph g(6);

     g.addEdges(3, 1);
     g.addEdges(2, 3);
     g.addEdges(4, 0);
     g.addEdges(4, 1);
     g.addEdges(5, 0);
     g.addEdges(5, 3);

     g.topoSort();

     return 0;
}