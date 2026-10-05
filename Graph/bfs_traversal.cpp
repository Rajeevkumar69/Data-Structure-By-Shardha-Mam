// BFS Traversal In Graph
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

     void addEdges(int u, int v)
     {
          l[u].push_back(v);
          l[v].push_back(u);
     }

     void bfs()
     {
          queue<int> Q;
          vector<int> vis(V, false);
          Q.push(0);
          vis[0] = true;

          while (Q.size() > 0)
          {
               int u = Q.front();
               Q.pop();

               cout << u << " ";

               for (int v : l[u])
               {
                    if (!vis[v])
                    {
                         vis[v] = true;
                         Q.push(v);
                    }
               }
          }
          cout << endl;
     }
};

int main()
{

     Graph g(5);

     g.addEdges(0, 1);
     g.addEdges(1, 2);
     g.addEdges(1, 3);
     g.addEdges(2, 3);
     g.addEdges(2, 4);

     g.bfs();

     return 0;
}