#include <stdio.h>

int main(){
    int i, j, n, k;
    scanf("%d", &n);
    for(i = n; i > 0; i--){
        for(k = 0; k < i; k++)
            printf(" ");
        for(j = 0; j < n-i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}