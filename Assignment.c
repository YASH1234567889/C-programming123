#include <stdio.h>

struct bank {
    int balance;
    int deposit;
    int withdraw;
    int deposit2;
    int withdraw2;
};

int calculateBalance(struct bank acc) {
    int total = acc.balance + acc.deposit + acc.deposit2 - acc.withdraw - acc.withdraw2;
    return total;
}

void inputAccountDetails(struct bank *acc) {
    printf("Enter bank balance: Rs.");
    scanf("%d", &acc->balance);
    printf("Enter first deposit: Rs.");
    scanf("%d", &acc->deposit);
    printf("Enter first withdrawal: Rs.");
    scanf("%d", &acc->withdraw);
    printf("Enter second deposit: Rs.");
    scanf("%d", &acc->deposit2);
    printf("Enter second withdrawal: Rs.");
    scanf("%d", &acc->withdraw2);
}

void displayBalance(int total) {
    printf("The bank balance is: Rs.%d\n", total);
}

int main() {
    struct bank acc;
    inputAccountDetails(&acc);
    int total = calculateBalance(acc);
    displayBalance(total);
    return 0;
}

