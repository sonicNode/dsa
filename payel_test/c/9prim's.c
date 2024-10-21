#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>

#define INF INT_MAX

// Function to find the vertex with the minimum key value
int minKey(int key[], bool mstSet[], int V)
{
    int min = INF, min_index;

    for (int v = 0; v < V; v++)
    {
        if (mstSet[v] == false && key[v] < min)
        {
            min = key[v], min_index = v;
        }
    }

    return min_index;
}

// Function to print the constructed MST stored in parent[]
void printMST(int parent[], int **graph, int V)
{
    printf("Edge : Weight\n");
    for (int i = 1; i < V; i++)
    {
        printf("%d -> %d : %d\n", parent[i], i, graph[i][parent[i]]);
    }
}

// Function to construct and print MST for a graph represented using adjacency matrix representation
void primMST(int **graph, int V)
{
    int parent[V];  // Array to store constructed MST
    int key[V];     // Key values used to pick minimum weight edge in cut
    bool mstSet[V]; // To represent set of vertices not yet included in MST

    // Initialize all keys as INFINITE
    for (int i = 0; i < V; i++)
    {
        key[i] = INF;
        mstSet[i] = false;
    }

    // Always include first 1st vertex in MST.
    key[0] = 0;     // Make key 0 so that this vertex is picked as first vertex
    parent[0] = -1; // First node is always root of MST

    // The MST will have V vertices
    for (int count = 0; count < V - 1; count++)
    {
        // Pick the minimum key vertex from the set of vertices not yet included in MST
        int u = minKey(key, mstSet, V);

        // Add the picked vertex to the MST Set
        mstSet[u] = true;

        // Update key value and parent index of the adjacent vertices of the picked vertex.
        for (int v = 0; v < V; v++)
        {
            // graph[u][v] is non zero only for adjacent vertices of m
            // mstSet[v] is false for vertices not yet included in MST
            // Update the key only if graph[u][v] is smaller than key[v]
            if (graph[u][v] && mstSet[v] == false && graph[u][v] < key[v])
            {
                parent[v] = u, key[v] = graph[u][v];
            }
        }
    }

    // Print the constructed MST
    printMST(parent, graph, V);
}

int main()
{
    printf("Enter number of vertices: ");
    int V;
    scanf("%d", &V);

    // Dynamically allocate memory for the graph matrix
    int **G = (int **)malloc(V * sizeof(int *));
    for (int i = 0; i < V; i++)
    {
        G[i] = (int *)malloc(V * sizeof(int));
    }

    printf("Enter the costs:\n");
    for (int m = 0; m < V; m++)
    {
        for (int n = 0; n < V; n++)
        {
            scanf("%d", &G[m][n]);
        }
    }

    // Function call
    primMST(G, V);

    // Free allocated memory
    for (int i = 0; i < V; i++)
    {
        free(G[i]);
    }
    free(G);

    return 0;
}
