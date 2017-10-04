#include <stdio.h>

/* Program to perform multiplication of 2 matrix
 * Name: Kuldeep Pisda
 * Roll No: 16115036
 * */

int main(){
    int row1, col1, row2, col2, i, j, k, answer;
    // Max matrix of 5X5
    int mat1[5][5], mat2[5][5];
    printf("Enter the size of matrix (max 5X5):\n");
    printf("For matrix one\n");
    printf("Enter rows: ");
    scanf("%d", &row1);
    printf("Enter columns: ");
    scanf("%d", &col1);
    printf("\nFor matrix two\n");
    printf("Enter rows: ");
    scanf("%d", &row2);
    printf("Enter columns: ");
    scanf("%d", &col2);
    if(row1 <= 5 && col1 <= 5 && row2 <= 5 && col2 <= 5){
        if(col1 == row2){
            printf("Enter matrix one: \n");
            for(i = 0; i < row1; i++){
                for(j = 0; j < col1; j++){
                    scanf("%d", &mat1[i][j]);
                }
            }
            printf("Enter matrix two: \n");
            for(i = 0; i < row2; i++){
                for(j = 0; j < col2; j++){
                    scanf("%d", &mat2[i][j]);
                }
            }
            for(i = 0; i < row1; i++){
                for(j = 0; j < col2; j++){
                    answer = 0;
                    for(k = 0; k < col1; k++){
                        answer += mat1[i][k] * mat2[k][j];
                    }
                    printf("%d\t", answer);
                }
                printf("\n");
            }
        }else{
            printf("For matrix multiplication columns of first matrix must be equal to the rows of second matrix.\n");
        }
    }else{
        printf("Sorry we can have matrix of mas 5X5 :(\n Please try again");
    }
    return 0;
}