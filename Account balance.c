/*
name:Shedrack Kiilu
reg no:CT100/G/23588/24

*/




#include <stdio.h>

int main() {
    float balance;
    float withdraw;

    printf("Enter your CURRENT account balance: ");
    scanf("%f", &balance);

    while (balance > 0) {
        printf("Enter amount to withdraw: ");
        scanf("%f", &withdraw);

        balance -= withdraw;

        if (balance > 0)
            printf("Remaining balance: %.2f\n", balance);
        else
            printf("Insufficient balance!! your current balance is: %.2f\n", balance);
    }

    printf("end of youY transaction,TOP UP\n");
    return 0;
}