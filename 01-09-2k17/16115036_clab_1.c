#include <stdio.h>

int main(){
    int prime[1000];
    int i, j;
    for(i = 1 ; i <= 1000; i++){
        prime[i] = 1;
    }
    for(i = 4; i < 1000; i += 2){
        prime[i] = 0;
    }
    for(i = 3; i < 1000; i += 2){
        for(j = 2*i; j < 1000; j += i){
            prime[j] = 0;
        }
    }

    for(i = 1; i <1000; i++){
        if(prime[i] == 1){
            printf("%d\t", i);
        }
    }
    return 0;
}
