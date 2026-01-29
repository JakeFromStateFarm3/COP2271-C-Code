#include <stdio.h>

int main(void){
    int temp = 0;
    char home;
    int yes_or_no = 2;
    printf("Please indicate whether or not there is someone in the Home. Capital Y for yes. Capital N for no.\n");
    scanf("%c", &home);
    printf("Please input the current home temperature.\n");
    scanf("%d", &temp);
    yes_or_no = home;
    if(temp < 40 || temp > 100){
        printf("Invalid temperature.\n\n");
    }
    else if(yes_or_no == 78){
        printf("Switching to eco mode.\n\n");
    }
    else if(temp > 75){
        printf("Switching on AC.\n\n");
    }
    else if(temp < 68){
        printf("Switching on the heat.\n\n");
    }
    else{
        printf("Turning off.\n\n");
    }
}