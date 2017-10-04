#include <stdio.h>

/* Program to perform summation of 2 matrix
 * Name: Kuldeep Pisda
 * Roll No: 16115036
 * */

int main(){
    int row, col, i, j;
    // Max matrix of 5 X 5
    int mat1[5][5], mat2[5][5];
    printf("Enter the size of matrix (max 5X5):\n");
    printf("Enter rows: ");
    scanf("%d", &row);
    printf("Enter columns: ");
    scanf("%d", &col);
    if(row <= 5 && col <= 5){
        printf("Enter matrix one: \n");
        for(i = 0; i < row; i++){
            for(j = 0; j < col; j++){
                scanf("%d", &mat1[i][j]);
            }
        }
        printf("Enter matrix two: \n");
        for(i = 0; i < row; i++){
            for(j = 0; j < col; j++){
                scanf("%d", &mat2[i][j]);
            }
        }
        for(i = 0; i < row; i++){
            for(j = 0; j < col; j++){
                printf("%d\t", mat1[i][j]+mat2[i][j]);
            }
            printf("\n");
        }

    }else{
        printf("Sorry we can have matrix of mas 5X5 :(\n Please try again");
    }
    return 0;
}