#include<stdio.h>

struct bank
{
    int balance;
    int deposit;
    int withdraw;
    int deposit2;
    int withdraw2;
};

int main()
{
    struct bank acc;
    int total;
    
    printf("enter bank balance:\nRs:");
    scanf("%d", &acc.balance);
    
    printf("enter first deposit:\nRs:");
    scanf("%d", &acc.deposit);
    
    printf("enter first withdrawal:\nRs:");
    scanf("%d", &acc.withdraw);
    
    printf("enter second deposit:\nRs:");
    scanf("%d", &acc.deposit2);
    
    printf("enter second withdrawal:\nRs:");
    scanf("%d", &acc.withdraw2);
    
    total= acc.balance+acc.deposit+acc.deposit2-acc.withdraw-acc.withdraw2;
    
    printf("the bank balace is \nRs:%d", total);
    
    return 0;
    
}
