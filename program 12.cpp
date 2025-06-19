 #include <stdio.h>
#define SIZE 100

int stack[SIZE], top = -1;

// Push operation
void push(int value) {
    if (top == SIZE - 1)
        printf("Stack Overflow!\n");
    else {
        stack[++top] = value;
        printf("%d pushed to stack.\n", value);
    }
}

// Pop operation
void pop() {
    if (top == -1)
        printf("Stack Underflow!\n");
    else
        printf("%d popped from stack.\n", stack[top--]);
}

// Display stack
void display() {
    if (top == -1)
        printf("Stack is empty.\n");
    else {
        printf("Stack elements: ");
        for (int i = top; i >= 0; i--)
            printf("%d ", stack[i]);
        printf("\n");
    }
}

int main() {
    int choice, value;

    while (1) {
        printf("\n1.Push  2.Pop  3.Display  4.Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}

