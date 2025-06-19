#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}
struct Node* insert(struct Node* root, int data) {
    if (root == NULL)
        return createNode(data);
    if (data < root->data)
        root->left = insert(root->left, data);
    else if (data > root->data)
        root->right = insert(root->right, data);
    return root;
}
int search(struct Node* root, int key) {
    if (root == NULL)
        return 0;
    if (key == root->data)
        return 1;
    else if (key < root->data)
        return search(root->left, key);
    else
        return search(root->right, key);
}
int findMin(struct Node* root) {
    if (root == NULL)
        return -1;
    while (root->left != NULL)
        root = root->left;
    return root->data;
}
int findMax(struct Node* root) {
    if (root == NULL)
        return -1;
    while (root->right != NULL)
        root = root->right;
    return root->data;
}
int main() {
    struct Node* root = NULL;
    int n, val, key;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d values:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &val);
        root = insert(root, val);
    }
    printf("Enter element to search: ");
    scanf("%d", &key);
    if (search(root, key))
        printf("%d found in BST.\n", key);
    else
        printf("%d not found in BST.\n", key);
    printf("Minimum element: %d\n", findMin(root));
    printf("Maximum element: %d\n", findMax(root));
    return 0;
}

