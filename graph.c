#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 100

typedef struct {
    int vertices[MAX_VERTICES];
    int edges[MAX_VERTICES][MAX_VERTICES];
    int numVertices;
} Graph;

void init(Graph* graph, int numVertices) {
    graph->numVertices = numVertices;

    for (int i = 0; i < numVertices; i++) {
        graph->vertices[i] = 0;

        for (int j = 0; j < numVertices; j++) {
            graph->edges[i][j] = 0;
        }
    }
}

void addEdge(Graph* graph, int start, int end) {
    graph->edges[start][end] = 1;
    graph->edges[end][start] = 1;
}

void depthFirstSearch(Graph* graph, int start, int visited[]) {
    if (!visited[start]) {
        printf("%d ", start);
        visited[start] = 1;

        for (int i = 0; i < graph->numVertices; i++) {
            if (graph->edges[start][i] && !visited[i]) {
                depthFirstSearch(graph, i, visited);
            }
        }
    }
}

void breadthFirstSearch(Graph* graph, int start, int visited[]) {
    int queue[MAX_VERTICES];
    int front = -1, rear = -1;

    printf("%d ", start);
    visited[start] = 1;
    queue[++rear] = start;

    while (front != rear) {
        int current = queue[++front];

        for (int i = 0; i < graph->numVertices; i++) {
            if (graph->edges[current][i] && !visited[i]) {
                printf("%d ", i);
                visited[i] = 1;
                queue[++rear] = i;
            }
        }
    }
}

int main() {
    Graph graph;
    init(&graph, 6);

    addEdge(&graph, 0, 1);
    addEdge(&graph, 0, 2);
    addEdge(&graph, 1, 3);
    addEdge(&graph, 1, 4);
    addEdge(&graph, 2, 5);

    int visited[MAX_VERTICES] = {0};

    printf("Depth First Search: ");
    depthFirstSearch(&graph, 0, visited);
    printf("\n");

    // Reset visited array
    for (int i = 0; i < MAX_VERTICES; i++) {
        visited[i] = 0;
    }

    printf("Breadth First Search: ");
    breadthFirstSearch(&graph, 0, visited);
    printf("\n");

    return 0;
}
