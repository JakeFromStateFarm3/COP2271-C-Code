#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randNum(int upper, int lower){
    int random_Value = (rand() % (upper - lower)) + lower;
    return random_Value;
}
int main(){
    srand((unsigned)time(NULL));
    int x = 2;
    int factor1;
    int factor2;
    int size = 0;
    int choice;
    int i = 0;
    int z = 0;
    int count = 0;
    int two_d_array[6][6];
    int f = 0;
    int q = 0;
    int max = 0;
    int min = 51;
    int check;
    int checkTrue = 0;
    int row;
    int column;
    int new;
    while(1){
        printf("Please choose an option below by typing the number of the choice and hitting enter.\n1. Initialize array\n2. Find the maximum and minimum of the array\n3. Perform a linear search for a specific value\n4. Modify the nth element\n");
        scanf("%d", &choice);
        if (choice == 1){
            x = 2;
            printf("\nPlease input the desired number of entries for the array, between 15 and 20. except 17 and 19.\n");
            scanf("%d", &size);
            printf("\n");
            while(1){
                if((size % x) == 0){
                    if(x == 2 && size != 18){
                        x += 1;
                        continue;
                    }
                    factor1 = x;
                    factor2 = (size / x);
                    break;
                }
                else{
                    x += 1;
                }
            }
            while(count < (factor1*factor2)){
                two_d_array[i][z] = randNum(51,1);
                if(z == factor2 - 1){
                    i += 1;
                    z = 0;
                }
                else{
                    z += 1;
                }
                count += 1;
            }
        }
        if (choice == 2 && size != 0){
            i = 0;
            z = 0;
            count = 0;
            f = 0;
            q = 0;
            max = 0;
            min = 51;
            checkTrue = 0;
            while(f < factor1){
                while(q < factor2){
                    if(max < two_d_array[f][q]){
                        max = two_d_array[f][q];
                    }
                    if(min > two_d_array[f][q]){
                        min = two_d_array[f][q];
                    }
                    if(check == two_d_array[f][q]){
                        checkTrue = 1;
                    }
                    q += 1;
                }
                f += 1;
                q = 0;
            }
            printf("\nThe maximum value is %d", max);
            printf(" and the minimum value is %d", min);
            printf("\n\n"); 
        }
        else if (size == 0)
        {
            printf("\nYou have to initialize the array first\n\n");
            continue;
        }
        if (choice == 3 && size != 0){
            i = 0;
            z = 0;
            count = 0;
            f = 0;
            q = 0;
            max = 0;
            min = 51;
            checkTrue = 0;
            printf("\nPlease input the value you wish to check for.\n");
            scanf("%d", &check);
            while(f < factor1){
                while(q < factor2){
                    if(max < two_d_array[f][q]){
                        max = two_d_array[f][q];
                    }
                    if(min > two_d_array[f][q]){
                        min = two_d_array[f][q];
                    }
                    if(check == two_d_array[f][q]){
                        checkTrue = 1;
                    }
                    q += 1;
                }
                f += 1;
                q = 0;
            }
            if (checkTrue == 1){
                printf("\nThe chosen value exists.\n\n");
                continue;
            }
            else{
                printf("\nThe chosen value does not exist.\n\n");
                continue;
            }

        }
        else if (size == 0)
        {
            printf("\nYou have to initialize the array first\n\n");
            continue;
        }
        if (choice == 4 && size != 0){
            i = 0;
            z = 0;
            count = 0;
            f = 0;
            q = 0;
            max = 0;
            min = 51;
            checkTrue = 0;
            printf("\nPlease input the desired entry you wish to edit. rows first and then columns please. Remember, the row and column numbers start at 0. Not 1.\n");
            printf("There are %d", factor1);
            printf(" rows and %d", factor2);
            printf(" columns.\n");
            scanf("%d", &row);
            scanf("\n%d", &column);
            printf("\nPlease input what number you wish to modify it to.\n");
            scanf("%d", &new);
            two_d_array[row][column] = new;
            printf("\n\n");
        }
        else if (size == 0)
        {
            printf("\nYou have to initialize the array first\n\n");
            continue;
        }
        continue;
    }
}