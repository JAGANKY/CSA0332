#include <stdio.h>
int main() {
    int arr1[100], arr2[100], result[200];
    int n1, n2, i, k = 0;
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter %d elements:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
        result[k++] = arr1[i];
    }
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    printf("Enter %d elements:\n", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
        result[k++] = arr2[i];
    }
    printf("Concatenated array:\n");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", result[i]);
    }
    return 0;
}

