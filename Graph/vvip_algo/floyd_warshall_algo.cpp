// All Pairs Sorted In A Graph || Floyd Warshall Algorithm

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Graph
{
public:
     vector<vector<pair<int, int>>> adj;
     int V;

     Graph(int V)
     {
          this->V = V;
          adj.resize(V);
     }

     void addEdge(int u, int v, int wt)
     {
          adj[u].push_back({v, wt});
     }

     void floydwarshall()
     {
          const int INF = 1e9;

          vector<vector<int>> dist(V, vector<int>(V, INF));

          for (int i = 0; i < V; i++)
          {
               dist[i][i] = 0;
          }

          for (int u = 0; u < V; u++)
          {
               for (auto edge : adj[u])
               {
                    int v = edge.first;
                    int wt = edge.second;
                    dist[u][v] = min(dist[u][v], wt);
               }
          }

          for (int k = 0; k < V; k++)
          {
               for (int i = 0; i < V; i++)
               {
                    for (int j = 0; j < V; j++)
                    {
                         if (dist[i][k] != INF && dist[k][j] != INF)
                         {
                              dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                         }
                    }
               }
          }

          for (int i = 0; i < V; i++)
          {
               for (int j = 0; j < V; j++)
               {
                    if (dist[i][j] == INF)
                    {
                         cout << "INF ";
                    }
                    else
                    {
                         cout << dist[i][j] << " ";
                    }
               }
               cout << endl;
          }

          for (int i = 0; i < V; i++)
          {
               if (dist[i][i] < 0)
               {
                    cout << "Negitive Weighted Cycle Exists: \n";
                    break;
               }
          }
     }
};

int main()
{
     Graph graph(4);

     graph.addEdge(0, 1, 4);
     graph.addEdge(0, 2, 11);
     graph.addEdge(1, 2, 2);
     // graph.addEdge(3, 1, -8);
     graph.addEdge(2, 3, 3);

     graph.floydwarshall();

     return 0;
}
