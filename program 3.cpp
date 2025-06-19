#include <stdio.h>

int main() {
    int a[100], b[100], merged[200];
    int n1, n2, i, k;

    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter elements of first array:\n");
    for(i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    printf("Enter elements of second array:\n");
    for(i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    // Merging arrays
    for(i = 0; i < n1; i++)
        merged[i] = a[i];

    for(k = 0; k < n2; k++)
        merged[i++] = b[k];

    printf("Merged array:\n");
    for(i = 0; i < n1 + n2; i++)
        printf("%d ", merged[i]);

    return 0;
}

