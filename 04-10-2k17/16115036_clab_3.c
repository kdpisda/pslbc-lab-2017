#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* Program to make 3X3 sudoku
 * Name: Kuldeep Pisda
 * Roll No: 16115036
 * */

// Function to check the validity of input
bool check(int temp){
    if(temp >= 0 && temp <= 3){
        return false;
    }else{
        printf("Input must be in range of [1,3]\n Please enter it again.\n");
        return true;
    }
}

int main(){
    int i, j, temp;
    int sudoku[3][3];
    bool sudoku_status[3][3];
    printf("Please enter the sudoku 3X3 enter the blank place as 0\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            do{
                scanf("%d", &temp);
            }while(check(temp));
            sudoku[i][j] = temp;
            // sudoku_status[i][j]
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d\t", sudoku[i][j]);
        }
        printf("\n");
    }
    return 0;
}