#include <stdio.h>

int main()
{

    int p, t; // p=people t=total

    printf("Enter your people : ");
    scanf("%d", &p);

    t = (p * (p - 1)) / 2; //สูตรรร

    printf("Answer is : %d", t);

    return 0;
}