#include <stdio.h>

int main() {
    int arr[3] = {10, 20, 30};
    
    // BUG: Loop runs 4 times (0, 1, 2, 3) instead of 3 due to '<='
    // It will print 3 lines, but the 4th line is hidden or crashes the system.
    for (int i = 0; i <= 3; i++) {
        printf("Element %d: %d\n", i + 1, arr[i]);
    }
    return 0;
}
