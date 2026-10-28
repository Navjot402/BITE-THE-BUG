#include <stdio.h>

int main() {
    double balance = 500.00;
    double spend = 600.00; // Triggers bug (spend > balance)

    printf("Starting Balance: $%.2f\n", balance);
    
    // BUG: Missing the conditional check entirely. 
    // Participant thought they only needed to write the success path.
    double cashback = spend * 0.05;
    balance = (balance - spend) + cashback;

    printf("Transaction: Approved (Reward: $%.2f)\n", cashback);
    printf("Ending Balance: $%.2f\n", balance); // Prints negative money!
    return 0;
}
