#include <stdio.h>

int main()
{

    int num, maxValue = -2000000000, minValue = 2000000000, count;

    scanf("%d", &count);

  for (int i = 1; i <= count; i += 1)
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
    }

    printf("Min is = %d\n", minValue);
    printf("Max is = %d\n", maxValue);
}