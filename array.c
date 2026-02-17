/*
Author: Silvester Ngari Ngondi
Reg No.: BSCCS/2025/41718
Course: BIT 2203  Data Structures and Algorithms
Assignment: Data Structures Implementation in C
Date: 15-Feb-2026
*/

/*
Array Example
Real-life applications:
- Photoshop / image editing (pixels stored as arrays)
- Game leaderboards (scores stored in arrays for fast ranking)
Reason: Arrays allow random access to elements by index
*/

#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    printf("Array elements: ");
    for(int i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
