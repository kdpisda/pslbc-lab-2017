#include <stdio.h>
#include <stdlib.h>

/*  A C Program to calculate gross salary
 |  Program by: Kuldeep Pisda
 |  Roll No: 16115036
*/

int main(){
    float basic_salary, gross_salary, hra, da;
    char choice = 'Y';
    fflush(stdin);
    do{
        system("cls");
        printf("Enter your basic salary (INR) : ");
        scanf("%f",&basic_salary);
        if(basic_salary <= 10000){
            hra = basic_salary * 0.2;
            da = basic_salary * 0.8;
        }else if(basic_salary <= 20000){
            hra = basic_salary * 0.25;
            da = basic_salary * 0.95;
        }else{
            hra = basic_salary * 0.3;
            da = basic_salary * 0.95;
        }
        gross_salary = basic_salary + hra + da;
        printf("\nYour gross salary is :  %0.3f INR\n", gross_salary);
        printf("\nYour basic salary is :  %0.3f INR\n", basic_salary);
        printf("\nYour hra is :  %0.3f INR\n", hra);
        printf("\nYour da is :  %0.3f INR\n", da);
        fflush(stdin);
        printf("\n Want to generate another bill (Y/n): ");
        choice = fgetc(stdin);
        choice = (choice == 10 || choice == 89 || choice == 121) ? 'Y' : 'n';
    }while(choice == 'Y' || choice == 'y');

    system("pause");
    return 0;
}
