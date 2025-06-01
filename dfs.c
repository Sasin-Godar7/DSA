// program for depth first search
// This program implements a depth-first search (DFS) algorithm on a graph.
#include<stdio.h>
#include<stdlib.h>


#define MAX 100 // Maximum number of vertices in the graph
int visited[MAX]; // Array to keep track of visited vertices    
int graph[MAX][MAX]; // Adjacency matrix representation of the graph
int n; // Number of vertices in the graph
// Function to perform DFS on the graph
void dfs(int vertex) {
    visited[vertex] = 1; // Mark the current vertex as visited
    printf("%d ", vertex); // Print the current vertex

    for (int i = 0; i < n; i++) { // Loop through all vertices
        if (graph[vertex][i] == 1 && !visited[i]) { // If there is an edge and the vertex is not visited
            dfs(i); // Recursively call DFS on the adjacent vertex
        }
    }
}
// Main function

int main() {
    int edges; // Number of edges in the graph
    printf("Enter the number of vertices: ");
    scanf("%d", &n); // Input number of vertices

    printf("Enter the number of edges: ");
    scanf("%d", &edges); // Input number of edges

    // Initialize the adjacency matrix to 0
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            graph[i][j] = 0;
        }
    }

    // Input edges and fill the adjacency matrix
    printf("Enter the edges (u v) where u and v are vertex indices:\n");
    for (int i = 0; i < edges; i++) {
        int u, v;
        scanf("%d %d", &u, &v); // Input edge
        graph[u][v] = 1; // Mark edge in adjacency matrix
        graph[v][u] = 1; // For undirected graph, mark both directions
    }

    // Initialize visited array to 0
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }

    printf("Depth First Search starting from vertex 0:\n");
    dfs(0); // Start DFS from vertex 0

    return 0; // Return success
}
