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
void guessNumber(int number){
    int i = 1;
    while(i <= 6){
        if (number == i){
        printf("The random number is %d", i);
        printf(".\n");
        break;
    }
    i += 1;
    }
    
}
int main(){
    int num = randNum();
    guessNumber(num);
}