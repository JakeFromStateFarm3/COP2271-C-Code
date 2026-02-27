#include <stdio.h>

int main(){
    int option = 0;
    int integer = 0;
    int sum = 0;
    int product = 1;
    while(1){
        printf("===== Menu =====\n1. Sum from 1 to n\n2. Product from 1 to n\n3. Multiplication table\n4. Exit\nEnter your choice: ");
        
        scanf("%d", &option);
        if(option == 1){
            sum = 0;
            printf("Enter a positive integer: ");
            scanf("%d", &integer);
            if (integer > 0){
                for(int i=1; i<= integer; i++){
                    sum += i;
                }
                printf("Total sum from 1 to %d", integer);
                printf(" = %d", sum);
                printf("\n\n");
            }
            else{
                printf("invalid integer\n");
            }
        }
        else if(option == 2){
            product = 1;
            printf("Enter a positive integer: ");
            scanf("%d", &integer);
            if (integer > 0){
                for(int i=1; i<= integer; i++){
                    product = product * i;
                }
                printf("Total product from 1 to %d", integer);
                printf(" = %d", product);
                printf("\n\n");
            }
            else{
                printf("invalid integer\n\n");
            }
        }
        else if(option == 3){
            product = 0;
            printf("Enter a positive integer: ");
            scanf("%d", &integer);
            if (integer > 0){
                for(int i=1; i<= integer; i++){
                    for(int x=1; x<=10; x++){
                        printf("[%d", i);
                        printf(" * %d", x);
                        product = i * x;
                        printf(" = %d", product);
                        printf("] ");
                    }
                    printf("\n");
                }
                printf("\n");
            }
            else{
                printf("invalid integer\n\n");
            }
        }
        else if(option == 4){
            break;
        }
        else{
            printf("Invalid choice. Try again\n\n");
        }
        
    }
    
}