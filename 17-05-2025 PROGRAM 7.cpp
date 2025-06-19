 #include <stdio.h>

#define SIZE 100

int main() {
    int arr[SIZE], n = 0, choice, pos, value, i;

    while(1) {
        printf("\nArray Operations Menu:\n");
        printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: // Insert
                if(n == SIZE) {
                    printf("Array is full!\n");
                    break;
                }
                printf("Enter position (0 to %d): ", n);
                scanf("%d", &pos);
                if(pos < 0 || pos > n) {
                    printf("Invalid position!\n");
                    break;
                }
                printf("Enter value to insert: ");
                scanf("%d", &value);
                for(i = n; i > pos; i--)
                    arr[i] = arr[i - 1];
                arr[pos] = value;
                n++;
                printf("Inserted successfully!\n");
                break;

            case 2: // Delete
                if(n == 0) {
                    printf("Array is empty!\n");
                    break;
                }
                printf("Enter position to delete (0 to %d): ", n - 1);
                scanf("%d", &pos);
                if(pos < 0 || pos >= n) {
                    printf("Invalid position!\n");
                    break;
                }
                for(i = pos; i < n - 1; i++)
                    arr[i] = arr[i + 1];
                n--;
                printf("Deleted successfully!\n");
                break;

            case 3: // Display
                if(n == 0) {
                    printf("Array is empty!\n");
                } else {
                    printf("Array elements: ");
                    for(i = 0; i < n; i++)
                        printf("%d ", arr[i]);
                    printf("\n");
                }
                break;

            case 4: // Exit
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
