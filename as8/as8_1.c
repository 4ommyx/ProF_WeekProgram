#include <stdio.h>

int main()
{
    int h1, h2, h3, h4, h5, h6, h7, h8, h9, h10;
    printf("Enter the height of the student 1 :");
    scanf("%d", &h1);
    printf("Enter the height of the student 2 :");
    scanf("%d", &h2);
    printf("Enter the height of the student 3 :");
    scanf("%d", &h3);
    printf("Enter the height of the student 4 :");
    scanf("%d", &h4);
    printf("Enter the height of the student 5 :");
    scanf("%d", &h5);
    printf("Enter the height of the student 6 :");
    scanf("%d", &h6);
    printf("Enter the height of the student 7 :");
    scanf("%d", &h7);
    printf("Enter the height of the student 8 :");
    scanf("%d", &h8);
    printf("Enter the height of the student 9 :");
    scanf("%d", &h9);
    printf("Enter the height of the student 10 :");
    scanf("%d", &h10);
    double avgHeight = (h1 + h2 + h3 + h4 + h5 + h6 + h7 + h8 + h9 + h10) / 10;
    printf("-------------------\n");
    printf("Avg Height = %.2lf\n ", avgHeight);
    printf("-------------------\n");
    printf("Student 1 is  %d\n", h1);
    printf("Student 2 is  %d\n", h2);
    printf("Student 3 is  %d\n", h3);
    printf("Student 4 is  %d\n", h4);
    printf("Student 5 is  %d\n", h5);
    printf("Student 6 is  %d\n", h6);
    printf("Student 7 is  %d\n", h7);
    printf("Student 8 is  %d\n", h8);
    printf("Student 9 is  %d\n", h9);
    printf("Student 10 is %d\n", h10);
}