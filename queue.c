/*
Author: Silvester Ngari Ngondi
Reg No.: BSCCS/2025/41718
Course: BIT 2203  Data Structures and Algorithms
Assignment: Data Structures Implementation in C
*/

/*
Queue Example
Real-life applications:
- Print queue (first submitted document prints first)
- OS process scheduling
Reason: Queue follows FIFO (First In, First Out)
*/

#include <stdio.h>
#define MAX 5

int main() {
    int queue[MAX], front = 0, rear = -1;

    // Enqueue elements
    queue[++rear] = 1;
    queue[++rear] = 2;

    printf("Queue elements: ");
    for(int i = front; i <= rear; i++)
        printf("%d ", queue[i]);

    // Dequeue element
    front++;

    printf("\nAfter dequeue: ");
    for(int i = front; i <= rear; i++)
        printf("%d ", queue[i]);
    
    printf("\n");
    return 0;
}
