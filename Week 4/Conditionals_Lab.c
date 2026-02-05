#include <stdio.h>

int main(void){
    int decision = 0;
    int balance = 50000;
    int withdrawl = 0;
    int deposit = 0;
    printf("Type 1 for deposit\nType 2 for withdrawl\nType 3 to check your balance\nType 4 to exit\n\n");
    scanf("%d", &decision);
    switch (decision)
    {
    case 1:
        printf("Please input the amount for deposit\n");
        scanf("%d", &deposit);
        balance = balance + deposit;
        printf("\nDeposit successful. Your balance is now $%d", balance);
        printf("\n\n");
        break;
    case 2:
        printf("Please input the amount for withdrawl\n");
        scanf("%d", &withdrawl);
        if(balance >= withdrawl){
            balance = balance - withdrawl;
            printf("\nWithdrawl successful. Your balance is now $%d", balance);
            printf("\n\n");
        }
        else{
            printf("Insufficient Funds\n\n");
        }
        break;
    case 3:
        printf("\nYour balance is $%d", balance);
        printf("\n\n");
        break;
    case 4:
        printf("Exiting....");
        printf("Program successfully exited\n\n");
        break;
    
    default:
        printf("An error has occured. Exiting program.\n");
        printf("Exiting....");
        printf("Program successfully exited\n\n");
        break;
    }

}