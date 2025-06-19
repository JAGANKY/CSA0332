#include <stdio.h>

int main() {
    int arr[100], n, i, j;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Duplicate elements are:\n");
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                printf("%d\n", arr[i]);
                break; // Avoid printing the same duplicate multiple times
            }
        }
    }

    return 0;
}

