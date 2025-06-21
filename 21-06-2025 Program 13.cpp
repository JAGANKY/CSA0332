#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define SIZE 100
char stack[SIZE];
int top = -1;
void push(char c) {
    stack[++top] = c;
}
char pop() {
    return stack[top--];
}
char peek() {
    return stack[top];
}
int isEmpty() {
    return top == -1;
}
int precedence(char op) {
    if (op == '^') return 3;
    if (op == '*' || op == '/') return 2;
    if (op == '+' || op == '-') return 1;
    return 0;
}
void infixToPostfix(char* infix, char* postfix) {
    int i, j = 0;
    char ch;
    for (i = 0; infix[i]; i++) {
        ch = infix[i];
        if (isalnum(ch)) {
            postfix[j++] = ch;
        } else if (ch == '(') {
            push(ch);
        } else if (ch == ')') {
            while (!isEmpty() && peek() != '(')
                postfix[j++] = pop();
            pop(); // Remove '('
        } else {
            while (!isEmpty() && precedence(peek()) >= precedence(ch))
                postfix[j++] = pop();
            push(ch);
        }
    }
    while (!isEmpty())
        postfix[j++] = pop();

    postfix[j] = '\0';
}
int main() {
    char infix[SIZE], postfix[SIZE];
    printf("Enter Infix Expression: ");
    scanf("%s", infix);
    infixToPostfix(infix, postfix);
    printf("Postfix Expression: %s\n", postfix);
    return 0;
}

