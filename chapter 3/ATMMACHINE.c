#include <stdio.h>

int main()
{
    int pin, amount, withdral_amount;
    int balance = 20000;
    int daily_limit_balance = 5000;
    printf("enter your pin");
    scanf("%d", &pin);
    if (pin == 5678)
    {
        printf("enter your withdral_amount");
        scanf("%d", &withdral_amount);
        if (withdral_amount > balance)
        {
            printf("insufficient balence :");
        }
        else if (withdral_amount > daily_limit_balance)
        {
            printf("your daily limit is 5000 :");
        }
        else if (withdral_amount % 500 != 0)
        {
            printf("please enter multiply of 500 /n");
        }
        else
        {
            balance -= withdral_amount;
            printf("transaction successful remaining balence is %d", balance);
        }
    
    }
    else
    printf("wrong pin try again!!!!");
    return 0;
}