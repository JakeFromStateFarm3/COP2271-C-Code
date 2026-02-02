#include <stdio.h>

int main(void){
    int numMonths = 0;
    int total = 0;
    printf("Monthly Savings Calculation\n");
    printf("---------------------------\n");
    printf("Enter Number of Months: ");
    scanf("%d", &numMonths);
    printf("\n\nFormula used:\n");
    printf("Total = n * ((n + 1) / 2)\n\n");
    total = numMonths * ((numMonths + 1) / 2);
    printf("Total savings after %d", numMonths);
    printf(" months is: %d", total);
    printf("\n\n");
}