#include <stdio.h>

int parent[10];

int find(int i) {
    while(parent[i])
        i = parent[i];
    return i;
}

int uni(int i, int j) {
    if(i != j) {
        parent[j] = i;
        return 1;
    }
    return 0;
}

int main() {
    int n;
    int cost[10][10];
    int i, j;
    int a, b, u, v;
    int min, edges = 1;
    int totalCost = 0;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter cost adjacency matrix (0 for no edge):\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &cost[i][j]);
            if(cost[i][j] == 0)
                cost[i][j] = 999;
        }
    }

    printf("Edges in the Minimum Spanning Tree:\n");

    while(edges < n) {
        min = 999;
        for(i = 0; i < n; i++) {
            for(j = 0; j < n; j++) {
                if(cost[i][j] < min) {
                    min = cost[i][j];
                    a = u = i;
                    b = v = j;
                }
            }
        }

        u = find(u);
        v = find(v);

        if(uni(u, v)) {
            printf("%d - %d : %d\n", a, b, min);
            totalCost += min;
            edges++;
        }

        cost[a][b] = cost[b][a] = 999;
    }

    printf("Total cost of MST = %d\n", totalCost);
    return 0;
}