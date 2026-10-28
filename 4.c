#include <stdio.h>

int main() {
    double balance = 500.00;
    double spend = 100.00;

    printf("Starting Balance: $%.2f\n", balance);

    // BUG: Accidentally resetting spend to 0 via assignment '=' inside the check
    // Instead of evaluating a condition, it always passes as true/false incorrectly
    if (spend = 0) { 
        printf("Transaction: Declined\n");
        printf("Ending Balance: $%.2f\n", balance);
    } else {
        double cashback = spend * 0.05;
        balance = (balance - spend) + cashback;
        printf("Transaction: Approved (Reward: $%.2f)\n", cashback);
        printf("Ending Balance: $%.2f\n", balance);
    }
    return 0;
}
