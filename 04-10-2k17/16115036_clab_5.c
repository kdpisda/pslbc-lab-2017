#include <stdio.h>
#include <string.h>

int main(){
    char str[50], count_char[50];
    int count[50], len, i, j, counter = 0;
    printf("Enter the string: ");
    gets(str);
    len = strlen(str);
    for(i = 0; i < len; i++){
        for(j = i; j < len; j++){
            if(i!=j && str[j] != '.'){
                if(str[i] == str[j]){
                    count_char[counter] = str[i];
                    counter++;
                    str[j] = '.';
                }
            }
        }
    }
    for(i = 0; i < counter; i++)
}