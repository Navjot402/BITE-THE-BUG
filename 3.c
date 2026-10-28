#include <stdio.h>

int main() {
    double balance = 500.00;
    double spend = 100.00;
    double cashback; // Declared but not assigned a default value

    printf("Starting Balance: $%.2f\n", balance);

    if (spend <= balance) {
        double cashback = spend * 0.05; // BUG: Declares a NEW local variable hiding the outer one
        balance = (balance - spend) + cashback;
    }

    // BUG: Accesses the outer 'cashback' variable which was never assigned a value here
    printf("Transaction: Approved (Reward: $%.2f)\n", cashback); 
    printf("Ending Balance: $%.2f\n", balance);
    return 0;
}
