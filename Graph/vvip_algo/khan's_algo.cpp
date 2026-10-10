//  Topological Alogorithm using Khan's Algorithm
#include <iostream>
#include <list>
#include <queue>
#include <vector>
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

     void topoSort()
     {
          vector<int> res;
          vector<int> indeg(V, 0);

          for (int u = 0; u < V; u++)
          {
               for (int v : l[u])
               {
                    indeg[v]++;
               }
          }

          queue<int> q;

          for (int i = 0; i < V; i++)
          {
               if (indeg[i] == 0)
               {
                    q.push(i);
               }
          }

          while (!q.empty())
          {
               int curr = q.front();
               q.pop();
               res.push_back(curr);

               for (int v : l[curr])
               {
                    indeg[v]--;

                    if (indeg[v] == 0)
                    {
                         q.push(v);
                    }
               }
          }

          if (res.size() != V)
          {
               cout << "Cycle detected. Topological sort is not possible.";
               return;
          }

          for (int v : res)
          {
               cout << v << " ";
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
     g.addEdges(5, 2);

     g.topoSort();

     return 0;
}