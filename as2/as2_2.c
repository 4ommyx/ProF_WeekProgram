#include <stdio.h>

int main()
{
    int p, t;
    printf("Enter your people : ");
    scanf("%d", &p);

    t = (p) * (p - 1);

    printf("Answer is : %d ", t);

    return 0;
}
