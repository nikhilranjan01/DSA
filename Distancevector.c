#include<stdio.h>
#define MAX_NODES 10
#define INF 9999

struct Node {
    int distance[MAX_NODES];
    int via[MAX_NODES];
} routingTable[MAX_NODES];

int main() {
    int distanceMatrix[MAX_NODES][MAX_NODES], nodes, i, j, k;

    printf("Enter the number of nodes: ");
    scanf("%d", &nodes);

    printf("Enter the distance matrix (use %d for infinity):\n", INF);
    for(i = 0; i < nodes; i++) {
        for(j = 0; j < nodes; j++) {
            scanf("%d", &distanceMatrix[i][j]);
            if(i == j)
                distanceMatrix[i][j] = 0;
            routingTable[i].distance[j] = distanceMatrix[i][j];
            routingTable[i].via[j] = j;
        }
    }

    for(k = 0; k < nodes; k++) {
        for(i = 0; i < nodes; i++) {
            for(j = 0; j < nodes; j++) {
                if(routingTable[i].distance[j] > distanceMatrix[i][k] + routingTable[k].distance[j]) {
                    routingTable[i].distance[j] = distanceMatrix[i][k] + routingTable[k].distance[j];
                    routingTable[i].via[j] = k;
                }
            }
        }
    }

    for(i = 0; i < nodes; i++) {
        printf("\nRouting table for node %d:\n", i);
        printf("Destination\tDistance\tNext Hop\n");
        for(j = 0; j < nodes; j++) {
            printf("%d\t\t%d\t\t%d\n", j, routingTable[i].distance[j], routingTable[i].via[j]);
        }
    }

    return 0;
}
