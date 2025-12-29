#include <stdio.h>
#define INF 999

int main() {
    int n;
    int cost[10][10], visited[10] = {0};
    int i, j, count = 1;
    int min, u = 0, v = 0;
    int totalCost = 0;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter cost adjacency matrix (0 for no edge):\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &cost[i][j]);
            if(cost[i][j] == 0)
                cost[i][j] = INF;
        }
    }

    visited[0] = 1;   // start from vertex 0

    printf("Edges in the Minimum Spanning Tree:\n");

    while(count < n) {
        min = INF;
        for(i = 0; i < n; i++) {
            if(visited[i]) {
                for(j = 0; j < n; j++) {
                    if(!visited[j] && cost[i][j] < min) {
                        min = cost[i][j];
                        u = i;
                        v = j;
                    }
                }
            }
        }

        printf("%d - %d : %d\n", u, v, min);
        totalCost += min;
        visited[v] = 1;
        count++;
    }

    printf("Total cost of MST = %d\n", totalCost);
    return 0;
}
