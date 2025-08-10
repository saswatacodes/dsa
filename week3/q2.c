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

struct Node* insertMiddle(struct Node* head, int pos, int val) {
    struct Node* newNode = createNode(val);
    struct Node* curr = head;
    for (int i=1; i<pos-1 && curr; i++) curr = curr->next;
    newNode->next = curr->next;
    curr->next = newNode;
    return head;
}

void printList(struct Node* head) {
    while (head) { printf("%d ", head->data); head = head->next; }
}

int main() {
    int n, pos, val, x;
    scanf("%d", &n);
    struct Node* head = NULL;
    for (int i=0; i<n; i++) { scanf("%d", &x); head = insertEnd(head, x); }
    scanf("%d%d", &pos, &val);
    head = insertMiddle(head, pos, val);
    printList(head);
}
