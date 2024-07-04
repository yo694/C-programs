
#include <stdio.h>

// Define a structure for a bank account
typedef struct {
    double balance;
} BankAccount;

// Function prototypes
void check_balance(BankAccount *account);
void deposit_money(BankAccount *account);
void withdraw_money(BankAccount *account);

int main() {
    BankAccount account = {0.0};
    int choice;

    while (1) {
        printf("\nWelcome to the Banking System\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Please choose an option (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                check_balance(&account);
                break;
            case 2:
                deposit_money(&account);
                break;
            case 3:
                withdraw_money(&account);
                break;
            case 4:
                printf("Thank you for using the banking system. Goodbye!\n");
                return 0;
            default:
                printf("Invalid option. Please try again.\n");
        }
    }

    return 0;
}

void check_balance(BankAccount *account) {
    printf("Your balance is: $%.2f\n", account->balance);
}

void deposit_money(BankAccount *account) {
    double amount;
    printf("Enter the amount to deposit: ");
    scanf("%lf", &amount);

    if (amount > 0) {
        account->balance += amount;
        printf("$%.2f deposited successfully. ", amount);
        check_balance(account);
    } else {
        printf("Deposit amount must be positive.\n");
    }
}

void withdraw_money(BankAccount *account) {
    double amount;
    printf("Enter the amount to withdraw: ");
    scanf("%lf", &amount);

    if (amount > 0) {
        if (amount <= account->balance) {
            account->balance -= amount;
            printf("$%.2f withdrawn successfully. ", amount);
            check_balance(account);
        } else {
            printf("Insufficient balance.\n");
        }
    } else {
        printf("Withdrawal amount must be positive.\n");
    }
}
