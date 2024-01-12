#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
} Node;

Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

Node* insert(Node* head, int value) {
    Node* newNode = createNode(value);
    if (head == NULL) {
        return newNode;
    }

    newNode->next = head;
    head->prev = newNode;
    return newNode;
}

Node* deleteNode(Node* head, int value) {
    if (head == NULL) {
        printf("List is empty\n");
        return NULL;
    }

    if (head->data == value) {
        Node* temp = head;
        head = head->next;
        if (head != NULL) {
            head->prev = NULL;
        }
        free(temp);
        return head;
    }

    Node* current = head;
    while (current != NULL && current->data != value) {
        current = current->next;
    }

    if (current == NULL) {
        printf("Element not found\n");
        return head;
    }

    if (current->prev != NULL) {
        current->prev->next = current->next;
    }

    if (current->next != NULL) {
        current->next->prev = current->prev;
    }

    free(current);

    return head;
}

void traverse(Node* head) {
    printf("List: ");
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    Node* head = NULL;

    head = insert(head, 1);
    head = insert(head, 2);
    head = insert(head, 3);

    traverse(head);

    head = deleteNode(head, 2);

    traverse(head);

    return 0;
}
