#include <stdio.h>

int main(){
    float num1, num2;
    printf("\nEnter length in feet\n");
    scanf("%f", &num1);
    scanf("%f", &num2);
    printf("\nSum in feet %0.2f", num1+num2);
    printf("\nSum in inches %0.2f\n", (num1+num2)*12);
    return 0;
}