#include <stdio.h>

int main() {
    char name[3] = {'A', 'B', 'C'}; // BUG: Missing '\0' at the end

    printf("Hello,\n");
    printf("User:\n");
    printf("%s\n", name); // BUG: Will print ABC followed by random memory garbage
    
    return 0;
}
