#include <stdio.h>

int main(void){
    int weight = 0;
    char membership;
    float price = 0.00;
    int eligible = 1;
    int yes_or_no = 2;
    printf("Please indicate whether or not the person sending the package has a membership or not. Capital Y for if they do. Capital N if they don't\n");
    scanf("%c", &membership);
    printf("Please input the weight of the package in pounds.\n");
    scanf("%d", &weight);
    yes_or_no = membership;
    if(weight <= 0){
        printf("\npackage is not eligible for shipping");
        eligible = 0;
    }
    else if(weight <= 1){
        price = 4.99;
    }
    else if(weight <= 5){
        price = 9.99;
    }
    else if(weight > 5){
        price = 14.99;
    }
    if(yes_or_no == 89 && eligible == 1){
        price = price * 0.9;
        printf("\nThe price is $%0.2f", price);
        printf("\n\n");
    }
    else if(yes_or_no == 78 && eligible == 1){
        printf("\nThe price is $%0.2f", price);
        printf("\n\n");
    }
    else{
        printf("\nnot eligible for pricing.\n");
    }

}