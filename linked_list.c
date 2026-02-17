/*
Linked List Example
Real-life applications:
- Spotify playlists (songs can be added, removed, reordered)
- Undo/Redo in Microsoft Word
Reason: Linked lists allow dynamic size and fast insert/delete
*/

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void printList(struct Node* n) {
    while(n != NULL) {
        printf("%d -> ", n->data);
        n = n->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = malloc(sizeof(struct Node));
    struct Node* second = malloc(sizeof(struct Node));
    struct Node* third = malloc(sizeof(struct Node));

    head->data = 10; head->next = second;
    second->data = 20; second->next = third;
    third->data = 30; third->next = NULL;

    printf("Linked List: ");
    printList(head);

    return 0;
}

