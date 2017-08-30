#include <stdio.h>
#include <stdlib.h>
/* C program to check whether a year is leap year or not
 | Program By: Kuldeep Pisda
 | Roll No: 16115036
*/

int main()
{
    int year;
    char choice = 'Y';
    do{
        system("cls");
        printf("Enter a year to check if it is a leap year : ");
        scanf("%d", &year);
        if ( year%400 == 0) printf("%d is a leap year.\n", year);
        else if ( year%100 == 0) printf("%d is not a leap year.\n", year);
        else if ( year%4 == 0 ) printf("%d is a leap year.\n", year);
        else printf("%d is not a leap year.\n", year);
        fflush(stdin);
        printf("\n Want to check again? (Y/n): ");
        choice = fgetc(stdin);
        choice = (choice == 10 || choice == 89 || choice == 121) ? 'Y' : 'n';
    }while(choice == 'Y');
    return 0;
}
