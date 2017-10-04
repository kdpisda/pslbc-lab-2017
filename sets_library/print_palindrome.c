#include <stdio.h>
#include <stdbool.h>

bool is_palindrome(int number){
    int i, array[50], counter = 0, j;
    int temp = number;
    bool flag = true;
    while(temp != 0){
        array[counter] = temp % 10;
        temp /= 10;
        counter++;
    }
    for(i = 0, j = (counter-1); i <= (counter-1)/2; i++, j--){
        if(array[i] != array[j]){
            flag = false;
            break;
        }
    }
    return (flag == true) ? true : false;
}

int main(){
    int i;
    for(i = 1; i <= 1000; i++){
        if(is_palindrome(i)){
            printf("%d\t", i);
        }
    }
    return 0;
}