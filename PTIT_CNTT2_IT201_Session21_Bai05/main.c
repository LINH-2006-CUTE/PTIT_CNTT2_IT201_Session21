#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
}Node;

Node* createNode(int data) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    return node;
}


Node* adjMatrix(int size);
void addEdge ( int start, int end) {
    Node* newNode= createNode(end);
    newNode->next= adjMatrix(start);
    adjMatrix(start) =newNode;
}

int main(void) {
    printf("Hello, World!\n");
    return 0;
}