#include <stdio.h>
#include <stdlib.h>

/*  A C Program to calculate calculate percentage and grade
 |  Program by: Kuldeep Pisda
 |  Roll No: 16115036
*/

int main(){
    int sub_1, sub_2, sub_3, sub_4, sub_5;
    float avg;
    char choice = 'Y', grade = 'E';
    fflush(stdin);
    do{
        system("cls");
        printf("Program to calculate percentage and grades");
        printf("\n Please enter your marks\n");
        printf("\nSubject 1 : ");
        scanf("%d", & sub_1);
        printf("\nSubject 2 : ");
        scanf("%d", & sub_2);
        printf("\nSubject 3 : ");
        scanf("%d", & sub_3);
        printf("\nSubject 4 : ");
        scanf("%d", & sub_4);
        printf("\nSubject 5 : ");
        scanf("%d", & sub_5);
        avg  = (float) ( sub_1 + sub_2 + sub_3 + sub_4 + sub_5) / 5;
        if(avg >= 90){
            grade = 'A';
        }else if(avg >= 80){
            grade = 'B';
        }else if(avg >= 70){
            grade = 'C';
        }else if(avg >= 60){
            grade = 'D';
        }else if(avg >= 40){
            grade = 'E';
        }else {
            grade = 'F';
        }
        printf("\nYour total percentage is :  %0.2f\% \n", avg);
        printf("\nYour grade is:  %c\n", grade);
        fflush(stdin);
        printf("\n Want to calculate grades again? (Y/n): ");
        choice = fgetc(stdin);
        choice = (choice == 10 || choice == 89 || choice == 121) ? 'Y' : 'n';
    }while(choice == 'Y' || choice == 'y');

    system("pause");
    return 0;
}
