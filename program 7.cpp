#include <stdio.h>
int main() {
    int arr[100], n, i, element, found = 0;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to find: ");
    scanf("%d", &element);
    for(i = 0; i < n; i++) {
        if(arr[i] == element) {
            printf("Element %d found at index %d (position %d).\n", element, i, i + 1);
            found = 1;
            break;
        }
    }
    if(!found)
        printf("Element %d not found in the array.\n", element);
    return 0;
}

