#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter your num :");
    scanf("%d", &n);
    
        for (int y = 1; y <= n; y += 1)
    {

        for (int x = 1; x <= n; x += 1)
        {
            if ((x >= 2 && x <= n - 1) && (y >= 2 && y <= n - 1))
            {

                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
}