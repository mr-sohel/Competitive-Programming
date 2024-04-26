#include <iostream>
#include <vector>

using namespace std;

void topologicalSortUtil(vector<vector<int>>& graph, vector<int>& indegree, vector<int>& path, vector<bool>& visited) {
   bool flag = false;

   for (int i = 0; i < graph.size(); ++i) {
      if (indegree[i] == 0 && !visited[i]) {
         for (int j = 0; j < graph[i].size(); ++j) {
            indegree[graph[i][j]]--;
         }
         path.push_back(i);
         visited[i] = true;
         topologicalSortUtil(graph, indegree, path, visited);

         visited[i] = false;
         path.pop_back();
         for (int j = 0; j < graph[i].size(); ++j) {
            indegree[graph[i][j]]++;
         }

         flag = true;
      }
   }

   if (!flag) {
      for (int i = 0; i < path.size(); ++i) {
         cout << path[i] << " ";
      }
      cout << endl;
   }
}

void allTopologicalSorts(vector<vector<int>>& graph, int V) {
   vector<int> indegree(V, 0);
   vector<bool> visited(V, false);
   vector<int> path;

   for (int i = 0; i < V; ++i) {
      for (int j = 0; j < graph[i].size(); ++j) {
         indegree[graph[i][j]]++;
      }
   }

   topologicalSortUtil(graph, indegree, path, visited);
}

int main() {
   int V, E;
   // cout << "Enter the number of vertices and edges: ";
   cin >> V >> E;

   vector<vector<int>> graph(V);

   // cout << "Enter the edges (format: from to):" << endl;
   for (int i = 0; i < E; ++i) {
      int from, to;
      cin >> from >> to;
      graph[from].push_back(to);
   }

   // cout << "All possible topological sorts are:" << endl;
   allTopologicalSorts(graph, V);

   return 0;
}
