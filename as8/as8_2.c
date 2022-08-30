#include <stdio.h>

int main()
{

    int count, sum = 0, h;

    printf("Enter the number of students = ");
    scanf("%d", &count);
    printf("-------------------\n");
    

    for (int i = 1; i <= count; i += 1)
    {

        printf("Enter your heigh : ");
        scanf("%d", &h);

        sum = sum + h;

        printf("Student %d is : %d \n", i, h);
        printf("-------------------\n");
    }

    double avgHeigh = (sum / count);
    printf("Averge heigh is = %.2lf", avgHeigh);
}