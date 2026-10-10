// Sortest Path From src/root To All Vertices For eighted Graph

#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

class Edge
{
public:
     int v, wt;

     Edge(int v, int wt)
     {
          this->v = v;
          this->wt = wt;
     }
};

void dijkstra(int src, vector<vector<Edge>> &g, int V)
{
     vector<int> dist(V, INT_MAX);
     dist[src] = 0;

     priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
     pq.push({0, src});

     while (!pq.empty())
     {
          int u = pq.top().second;
          int d = pq.top().first;
          pq.pop();

          if (d > dist[u])
          {
               continue;
          }

          for (auto e : g[u])
          {
               if (dist[e.v] > dist[u] + e.wt)
               {
                    dist[e.v] = dist[u] + e.wt;
                    pq.push({dist[e.v], e.v});
               }
          }
     }

     for (auto i = 0; i < V; i++)
     {
          cout << dist[i] << " ";
     }
}

int main()
{
     int V = 6;
     vector<vector<Edge>> g(V);

     g[0].push_back(Edge(1, 2));
     g[0].push_back(Edge(2, 4));

     g[1].push_back(Edge(2, 1));
     g[1].push_back(Edge(3, 7));

     g[2].push_back(Edge(4, 3));

     g[3].push_back(Edge(5, 1));

     g[4].push_back(Edge(3, 2));
     g[4].push_back(Edge(5, 5));

     dijkstra(0, g, V);

     return 0;
}

/*
TC: (O((V+E)\log V)), commonly written as (O(E\log V)) for a connected graph.
SC: (O(V+E)), including the adjacency list and auxiliary data structures.

Where:
(V) = number of vertices
(E) = number of edges

Interview note: For an adjacency list with a binary heap, state TC: (O((V+E)\log V)), SC: (O(V+E)).
*/