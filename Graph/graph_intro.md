### Graph

*A graph is a non-linear data structure consisting of a finite set of vertices (or nodes) and a set of edges (links) that connect pairs of vertices.*

- Unlike trees, graphs do not follow a strict hierarchical structure, meaning nodes can be interconnected randomly to model real-world networks like social connections, road maps, and the internet.

## Core Terminology

• Vertex (Node): The fundamental unit storing data.

• Edge (Link): The connection between two vertices.

• Degree: The total number of edges connected to a vertex.
	• Directed Graphs split this into In-Degree (incoming edges) and Out-Degree (outgoing edges).

• Weight: A cost, distance, or score assigned to an edge.

cpp code
```
#include <iostream>
#include <vector>

class Graph {
     private:
     int numVertices;
     // An array of vectors to hold neighbors for each vertex
     vector<vector<int>> adjList;

     public:
     // Initialize graph with a fixed number of vertices
     Graph(int vertices) {
          numVertices = vertices;
          adjList.resize(vertices);
     }

     // Add an undirected edge between source (src) and destination (dest)
     void addEdge(int src, int dest) {
          adjList[src].push_back(dest);
          adjList[dest].push_back(src); // Remove this line for a Directed Graph
     }

     // Print the graph configuration
     void printGraph() {
          for (int i = 0; i < numVertices; ++i) {
               cout << "Vertex " << i << " connects to: ";
               for (int neighbor : adjList[i]) {
                    cout << neighbor << " ";
               }
               cout << "\n";
          }
     }
};

int main() {
    Graph g(4);

    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 3);

    g.printGraph();

    return 0;
}

```