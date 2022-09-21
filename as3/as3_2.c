#include <stdio.h>

int main()
{
    int p, t = 0;

    printf("Enter your people : ");
    scanf("%d", &p);
    int pr = p - 1;
    for (int i = pr; i > 0; i--)
    {
        t = t + i;
    }
    printf("Answer is : %d", t);

    return 0;
}