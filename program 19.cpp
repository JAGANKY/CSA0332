#include <stdio.h>
int main() {
    int arr[100], n, totalSum = 0, actualSum = 0;
    printf("Enter the value of n (range should be 1 to n): ");
    scanf("%d", &n);
    printf("Enter %d elements (from 1 to %d with one missing):\n", n - 1, n);
    for(int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
        actualSum += arr[i];
    }
    totalSum = n * (n + 1) / 2;
    printf("Missing element is: %d\n", totalSum - actualSum);
    return 0;
}

