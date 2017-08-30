#include <stdio.h>
#include <stdlib.h>

/*  A C Program to find whether the given
 |  number is even or odd.
 |  Program by: Kuldeep Pisda
 |  Roll No : 16115036
*/

int main(){
    int number;
    char choice = 'Y';
    do{
        system("cls");
        printf("Enter a number : ");
        scanf("%d", &number);
        if( number % 2 == 0){
            printf("\n %d is even.\n",number);
        }else{
            printf("\n %d is odd.\n",number);
        }
        fflush(stdin);
        printf("\n Want to calculate grades again? (Y/n): ");
        choice = fgetc(stdin);
        choice = (choice == 10 || choice == 89 || choice == 121) ? 'Y' : 'n';
    }while(choice == 'Y' || choice == 'y');
    system("pause");
    return 0;
}
