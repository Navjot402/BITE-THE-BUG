#include <stdio.h>

int main() {
    int *ptr; // BUG: Pointer is uninitialized (points to random memory location)

    printf("Line 1: System Init\n");
    printf("Line 2: Loading Data\n");
    
    *ptr = 100; // BUG: Dereferencing wild pointer (Segmentation Fault)
    printf("Line 3: Value is %d\n", *ptr);
    
    return 0;
}
