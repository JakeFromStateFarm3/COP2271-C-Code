#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randNum(int upper, int lower){
    srand((unsigned)time(NULL));
    int random_Value = (rand() % (upper - lower)) + lower;
    return random_Value;
}
int main(){
    int x = 2;
    int factor_count = 0;
    int factor1;
    int factor2;
    int size = randNum(21, 15);
    if(size == 17 || size == 19){
        size += 1;
    }
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
    printf("\n%d", size);
    int i = 0;
    int z = 0;
    int count = 0;
    int two_d_array[factor1][factor2];
    while(count <= size){
        two_d_array[i][z] = randNum(51,1);
        if(z == factor2){
            i += 1;
            z = 0;
        }
        z += 1;
        count += 1;
    }
    int f = 0;
    int q = 0;
    int count2 = 0;
    while(count2 <= size){
        while(q <= factor2){
            printf("\n%d", two_d_array[f][q]);
            q += 1;
        }
        f += 1;
        q = 0;
        count2 += 1;
    }
}