#include <stdio.h>

int main(void){
    int attendance_percentage = 0;
    int quiz_average = 0;
    printf("Please input the student attendance percentage. Number only please.\n");
    scanf("%d", &attendance_percentage);
    printf("Please input the quiz average. Number only please.\n");
    scanf("%d", &quiz_average);
    if(attendance_percentage <= 70 || quiz_average < 60){
        printf("the student is not eligible\n\n");
    }
    else{
        printf("The student is eligible\n\n");
    }

}