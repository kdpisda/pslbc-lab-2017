#include <stdio.h>

int main(){
    int i, j, n, k;
    scanf("%d", &n);
    for(i = n; i >= 0; i--){
        for(k = 0; k < i; k++)
            printf(" ");
        for(j = 0; j < 2*(n-i); j++){
            if(j == 0 || j == 2*(n-i) - 2){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    for(i = 1; i < n; i++){
        for(k = 0; k < i; k++)
            printf(" ");
        for(j = 0; j < 2*(n-i); j++){
            if(j == 0 || j == 2*(n-i) - 2){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}