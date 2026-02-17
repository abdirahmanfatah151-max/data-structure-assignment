/*
Graph Example (Adjacency Matrix)
Real-life applications:
- GPS systems (intersections = nodes, roads = edges)
- Social networks (users = nodes, connections = edges)
Reason: Graphs model relationships, allow pathfinding algorithms
*/

#include <stdio.h>
#define MAX 4

int main() {
    int graph[MAX][MAX] = {
        {0, 1, 1, 0},
        {1, 0, 0, 1},
        {1, 0, 0, 1},
        {0, 1, 1, 0}
    };

    printf("Graph adjacency matrix:\n");
    for(int i = 0; i < MAX; i++) {
        for(int j = 0; j < MAX; j++)
            printf("%d ", graph[i][j]);
        printf("\n");
    }

    return 0;
}

