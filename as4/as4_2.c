#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter your num :");
    scanf("%d", &n);
    for (int y = -n + 1; y <= n - 1; y += 1)
    {

        for (int x = -n + 1; x <= n - 1; x += 1)
        {

            if ((y >= x && y <= -x) || (y >= -x && y <= x))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}