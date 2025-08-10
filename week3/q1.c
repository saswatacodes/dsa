#include <stdio.h>
#include <stdlib.h>

struct Node { int data; struct Node* next; };

struct Node* createNode(int val) {
    struct Node* temp = malloc(sizeof(struct Node));
    temp->data = val;
    temp->next = NULL;
    return temp;
}

struct Node* insertEnd(struct Node* head, int val) {
    struct Node* newNode = createNode(val);
    if (!head) return newNode;
    struct Node* curr = head;
    while (curr->next) curr = curr->next;
    curr->next = newNode;
    return head;
}

void printList(struct Node* head) {
    while (head) {
        printf("%d ", head->data);
        head = head->next;
    }
}

int main() {
    int n, val;
    scanf("%d", &n);
    struct Node* head = NULL;
    for (int i=0; i<n; i++) {
        scanf("%d", &val);
        head = insertEnd(head, val);
    }
    printList(head);
}
