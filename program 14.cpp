#include <stdio.h>
#include <limits.h>

#define MAX 10

int tsp(int graph[MAX][MAX], int visited[MAX], int pos, int n, int count, int cost, int start, int *minCost) {
    if (count == n && graph[pos][start]) {
        if (cost + graph[pos][start] < *minCost)
            *minCost = cost + graph[pos][start];
        return *minCost;
    }

    for (int i = 0; i < n; i++) {
        if (!visited[i] && graph[pos][i]) {
            visited[i] = 1;
            tsp(graph, visited, i, n, count + 1, cost + graph[pos][i], start, minCost);
            visited[i] = 0; // backtrack
        }
    }
    return *minCost;
}

int main() {
    int graph[MAX][MAX], visited[MAX] = {0};
    int n, minCost = INT_MAX;

    printf("Enter number of cities: ");
    scanf("%d", &n);

    printf("Enter the cost matrix (0 if no direct path):\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &graph[i][j]);

    visited[0] = 1; // start from city 0
    tsp(graph, visited, 0, n, 1, 0, 0, &minCost);

    printf("Minimum cost to visit all cities: %d\n", minCost);
    return 0;
}

