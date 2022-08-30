#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter your num :");
    scanf("%d", &n);
    for (int i = n - 1; i >= -n + 1; i -= 1)
    {

        for (int j = n - 1; j >= -n + 1; j -= 1)
        {

            if (abs(j) <= -i)
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
    return 0 ;
}