#include <stdio.h>

int main()
{

    int num, maxValue = -2000000000, minValue = 2000000000, count, i = 1;

    scanf("%d", &count);

    while (i <= count)
    {
        scanf("%d", &num);
        if (minValue > num)
        {
            minValue = num;
        }
        else if (maxValue < num)
        {
            maxValue = num;
        }

        i++;
    }

    printf("Min is = %d\n", minValue);
    printf("Max is = %d\n", maxValue);
}
