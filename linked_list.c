/*
Author: Silvester Ngari Ngondi
Reg No.: BSCCS/2025/41718
Course: BIT 2203 – Data Structures and Algorithms
Assignment: Data Structures Implementation in C
Date: 15-Feb-2026
*/

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
