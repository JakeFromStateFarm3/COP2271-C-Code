#include <stdio.h>

int main(void){
    int temp = 0;
    printf("Please input the temperature in units of Fahrenheit\n");
    scanf("%d", &temp);
    temp = (((temp-32)/9)*5);
    printf("%d", temp);
    printf(" degrees celsius");
    printf("\n\n");
}