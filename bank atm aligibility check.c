#include <stdio.h>
#include <conio.h>

int main() {
    float account_balance, withdrawal_amount;
    char permit;

    
    printf("Enter your account balance: ");
    scanf("%f", &account_balance);
    printf("Enter the amount you want to withdraw: ");
    scanf("%f", &withdrawal_amount);

    
    if (account_balance >= withdrawal_amount) {
        
        if (withdrawal_amount > 10000) {
            
            printf("The withdrawal amount is greater than 10,000. Do you have a special withdrawal permit? (Y/N): ");
            scanf(" %c", &permit);

            if (permit == 'Y' || permit == 'y') {
                printf("Withdrawal approved. Please collect your cash.\n");
            } else {
                printf("Withdrawal denied. You need a special withdrawal permit for amounts over 10,000.\n");
            }
        } else {
            printf("Withdrawal approved. Please collect your cash.\n");
        }
    } else {
        printf("Withdrawal denied. Insufficient funds.\n");
    }

    getch();
}