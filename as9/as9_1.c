#include <stdio.h>

int num, maxValue = -2000000000, minValue = 2000000000, count;

void numMin(int num)
{
    if (minValue > num)
    {
        minValue = num;
    }
}
void numMax(int num)
{
    if (maxValue < num)
    {
        maxValue = num;
    }
}

int main()
{

    scanf("%d", &count);

    for (int i = 1; i <= count; i += 1)
    {
        scanf("%d", &num);
        numMin(num);
        numMax(num);
    }
    printf("Min is = %d\n", minValue);
    printf("Max is = %d\n", maxValue);
}