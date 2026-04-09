#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int one_d_array[10];
    int i = 0;
    printf("please input 10 integer values, pressingenter after each one.\n");
    scanf("%d", &one_d_array[0]);
    scanf("%d", &one_d_array[1]);
    scanf("%d", &one_d_array[2]);
    scanf("%d", &one_d_array[3]);
    scanf("%d", &one_d_array[4]);
    scanf("%d", &one_d_array[5]);
    scanf("%d", &one_d_array[6]);
    scanf("%d", &one_d_array[7]);
    scanf("%d", &one_d_array[8]);
    scanf("%d", &one_d_array[9]);
    while(i <= 9){
        printf("\n%d", one_d_array[i]);
        i += 1;
    }
    i = 9;
    printf("\n");
    while(i >= 0){
        printf("\n%d", one_d_array[i]);
        i -= 1;
    }
    printf("\n");
}