#include <stdio.h>
#include <stdlib.h>

struct Student{
    char first_name[30];
    char last_name[30];
    int roll_no;
    int marks;
    float percentage;
};

int main(){
    struct Student students;
    char name[30];
    int roll_no, marks, n, i;
    float percentage;
    scanf("%d", &n);
    students = (struct Student*) malloc(sizeof(struct Student)*n);
    for(i = 0; i < n; i++){
        printf("Enter your first name: ");
        scanf("%s", students[i].first_name);
        printf("Enter your last name: ");
        scanf("%s", students[i].last_name);
        // fgets(students[i].name, 30, stdin);
        printf("Enter roll no: ");
        scanf("%d", &students[i].roll_no);
        printf("Enter marks: ");
        scanf("%d", &students[i].marks);
        printf("Enter percentage: ");
        scanf("%f", &students[i].percentage);
    }
    for(i = 0; i < n; i++){
        printf("\nStudent %d\n", i+1);
        printf("First Name: %s\n", students[i].first_name);
        printf("Last Name: %s\n", students[i].last_name);
        printf("Roll No: %d\n", students[i].roll_no);
        printf("Marks: %d\n", students[i].marks);
        printf("Percentage: %0.2f\n", students[i].percentage);
    }
    return 0;
}