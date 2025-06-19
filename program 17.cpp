#include <stdio.h>
int linearSearch(int arr[], int n, int key) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key)
            return i;  // return index
    }
    return -1;
}
int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] == key)
            return mid;
        else if(arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
void sortArray(int arr[], int n) {
    for(int i = 0; i < n - 1; i++)
        for(int j = 0; j < n - i - 1; j++)
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
}
int main() {
    int arr[100], n, key, index;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);
    index = linearSearch(arr, n, key);
    if(index != -1)
        printf("Linear Search: %d found at index %d\n", key, index);
    else
        printf("Linear Search: %d not found\n", key);
    sortArray(arr, n);
    index = binarySearch(arr, n, key);
    if(index != -1)
        printf("Binary Search: %d found at index %d (in sorted array)\n", key, index);
    else
        printf("Binary Search: %d not found\n", key);
    return 0;
}

