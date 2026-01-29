#include <stdio.h>

int main(void){
    int income = 0;
    int taxed_income = 0;
    printf("Please input your yearly income in USD.\n");
    scanf("%d", &income);
    if(income < 0){
        printf("Invalid income\n\n");
    }
    else if(income <= 10000){
        printf("Income is %d", income, " usd\n");
        printf("You pay no taxes on your income\n\n");
    }
    else if(income <= 40000){
        printf("Your income is %d", income);
        printf(" USD\n");
        printf("You pay a 10 percent tax on your income.\n");
        taxed_income = income * 0.9;
        printf("Your total take home income is %d", taxed_income);
        printf(" USD\n\n");
    }
    else{
        printf("Income is %d", income);
        printf(" USD\n");
        printf("You pay a 20 percent tax on your income.\n");
        taxed_income = income * 0.8;
        printf("Your total take home income is %d", taxed_income);
        printf(" USD\n\n");

    }


}