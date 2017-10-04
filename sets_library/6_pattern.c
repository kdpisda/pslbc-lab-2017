#include <stdio.h>

int main(){
    int number, i, j;
    scanf("%d", &number);
    for(i = 0; i < number; i++){
        for(j = 0; j < (number-i); j++){
            printf(" ");
        }
        
        printf("\n");
    }
    return 0;
}