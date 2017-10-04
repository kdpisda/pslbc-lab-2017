#include <stdio.h>

int main(){
    int i, j, number;
    scanf("%d", &number);
    printf("\n");
    for(i = 1; i <= number; i++){
        for(j = 0; j < i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}