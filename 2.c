#include <stdio.h>

int main() {
    int balance = 500;
    int spend = 90; 

    printf("Starting Balance: $%d.00\n", balance);

    if (spend > balance) {
        printf("Transaction: Declined\n");
        printf("Ending Balance: $%d.00\n", balance);
    } else {
        // BUG: (spend * (5 / 100)) evaluates to 0 because 5/100 in integer math is 0
        int cashback = spend * (5 / 100); 
        balance = (balance - spend) + cashback;
        
        printf("Transaction: Approved (Reward: $%d.00)\n", cashback);
        printf("Ending Balance: $%d.00\n", balance);
    }
    return 0;
}
