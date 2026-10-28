#include <stdio.h>

int main() {
    int input = 50000; // Works fine if input is 5, breaks if input is large

    printf("Processing Input...\n");
    printf("Step 1 Complete.\n");
    
    // BUG: 50000 * 50000 overflows a standard 32-bit signed integer
    printf("Final Result: %d\n", input * input); 
    
    return 0;
}
