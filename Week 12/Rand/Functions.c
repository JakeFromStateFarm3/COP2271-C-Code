#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randNum(){
    srand((unsigned)time(NULL));
    int upper = 7;
    int lower = 1; 
    int random_Value = (rand() % (upper - lower)) + lower;
    return random_Value;
}
int main(){
    int player_pos = 1;
    int roll_happen;
    int roll;
    int num_rolls = 1;
    while(1){
        roll = 0;
        roll_happen = 0;
        num_rolls += 1;
        printf("You are at position %d", player_pos);
        printf("\nWould you like to roll the die? 1 for yes, 2 for no.\n");
        scanf("%d", &roll_happen);
        if(roll_happen == 1){
            roll = randNum();
            player_pos += roll;
            if(player_pos > 100){
                player_pos -= roll;
            }
            if(player_pos == 3){
            printf("Ladder! Climb 19 spaces!\n");
            player_pos = 22;
            }
            printf("\nYou rolled a %d", roll);
            printf("\n");
            if(player_pos == 5){
                printf("Ladder! Climb 3 spaces!\n");
                player_pos = 8;
            }
            if(player_pos == 11){
                printf("Ladder! Climb 15 spaces!\n");
                player_pos = 26;
            }
            if(player_pos == 20){
                printf("Ladder! Climb 9 spaces!\n");
                player_pos = 29;
            }
            if(player_pos == 27){
                printf("Ladder! Climb 29 spaces!\n");
                player_pos = 56;
            }
            if(player_pos == 36){
                printf("Ladder! Climb 8 spaces!\n");
                player_pos = 44;
            }
            if(player_pos == 51){
                printf("Ladder! Climb 16 spaces!\n");
                player_pos = 67;
            }
            if(player_pos == 71){
                printf("Ladder! Climb 21 spaces!\n");
                player_pos = 92;
            }
            if(player_pos == 80){
                printf("Ladder! Climb 19 spaces!\n");
                player_pos = 99;
            }
            if(player_pos == 17){
                printf("Snake! Fall 13 spaces!\n");
                player_pos = 4;
            }
            if(player_pos == 19){
                printf("Snake! Fall 12 spaces!\n");
                player_pos = 7;
            }
            if(player_pos == 21){
                printf("Snake! Fall 12 spaces!\n");
                player_pos = 9;
            }
            if(player_pos == 43){
                printf("Snake! Fall 9 spaces!\n");
                player_pos = 34;
            }
            if(player_pos == 54){
                printf("Snake! Fall 23 spaces!\n");
                player_pos = 31;
            }
            if(player_pos == 62){
                printf("Snake! Fall 44 spaces!\n");
                player_pos = 18;
            }
            if(player_pos == 64){
                printf("Snake! Fall 4 spaces!\n");
                player_pos = 60;
            }
            if(player_pos == 87){
                printf("Snake! Fall 63 spaces!\n");
                player_pos = 24;
            }
            if(player_pos == 93){
                printf("Snake! Fall 20 spaces!\n");
                player_pos = 73;
            }
            if(player_pos == 95){
                printf("Snake! Fall 20 spaces!\n");
                player_pos = 75;
            }
            if(player_pos == 98){
                printf("Snake! Fall 19 spaces!\n");
                player_pos = 79;
            }
            if (player_pos == 100){
                printf("You win!!\n");
                printf("It took %d", num_rolls);
                printf(" to finish the game!!\n");
                break;
            }
        }
        if (roll_happen == 2){
            break;
        }
    }
}