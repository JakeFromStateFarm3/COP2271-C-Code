#include <stdio.h>

int main() {

    int i = 1;
    int sum = 0; // For question 2
    int sum2 = 0; // for question 3
    int sum3 = 0; // for question 4
    int x = 0;
    printf("Input the upper bound of summation.\n");
    scanf("%d", &x);
    while (i <= x) {
        printf("%d", i);
        printf(" ");
        sum += i;
        sum3 += i;
        // if(sum3 >= 20){
        //     break;
        // }
        if((i % 2) == 0){
            sum2 += i;
        }
        i++;
    }
    printf("Sum = %d", sum);
    printf("\nEven Sum = %d", sum2);
    //printf("\n%d", sum3);
    printf("\n");
    return 0;
}