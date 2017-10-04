#include <stdio.h>

int main(){
    int i, j, number;
    scanf("%d", &number);
    printf("\n");
    for(i = number; i > 0; i--){
        for(j = i; j > 0; j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}