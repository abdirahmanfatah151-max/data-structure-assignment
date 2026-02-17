/*
Author: Silvester Ngari Ngondi
Reg No.: BSCCS/2025/41718
Course: BIT 2203 – Data Structures and Algorithms
Assignment: Data Structures Implementation in C
Date: 15-Feb-2026
*/

/*
Stack Example
Real-life applications:
- Browser back/forward navigation
- IDE undo/redo
Reason: Stack follows LIFO (Last In, First Out)
*/

#include <stdio.h>
#define MAX 5

int main() {
    int stack[MAX], top = -1;

    // Push elements
    stack[++top] = 1;
    stack[++top] = 2;

    printf("Stack elements: ");
    for(int i = 0; i <= top; i++)
        printf("%d ", stack[i]);

    // Pop element
    top--;

    printf("\nAfter pop: ");
    for(int i = 0; i <= top; i++)
        printf("%d ", stack[i]);
    
    printf("\n");
    return 0;
}
