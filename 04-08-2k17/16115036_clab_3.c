#include <stdio.h>
#include <stdlib.h>

/*  A C Program to calculate electricity bill
 |  Program by: Kuldeep Pisda
 |  Roll No: 16115036
*/

int main(){
    float units, bill;
    char choice = 'Y';
    fflush(stdin);
    do{
        system("cls");
        printf("Enter number of units consumed in kWh : ");
        scanf("%f",&units);
        if(units <= 50){
            bill = units * 0.5;
        }else if(units <= 150){
            bill = 50 * 0.5 + (units-50) * 0.75;
        }else if(units <= 250){
            bill = 50 * 0.5 + 100 * 0.75 + (units-150) * 1.2;
        }else{
            bill = 50 * 0.5 + 100 * 0.75 + 100 * 1.2 + (units - 250) * 1.5 ;
        }
        printf("\nYour electricity bill is :  %0.3f INR\n", bill);
        fflush(stdin);
        printf("\n Want to generate another bill (Y/n): ");
        choice = fgetc(stdin);
        choice = (choice == 10 || choice == 89 || choice == 121) ? 'Y' : 'n';
    }while(choice == 'Y' || choice == 'y');

    system("pause");
    return 0;
}
