#include <stdio.h>

int num, maxValue = -2000000000, minValue = 2000000000, count,i=0 ; 

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

    while(i<count)
    {
        scanf("%d", &num);
        numMin(num);
        numMax(num);
        i+=1;
    }
    printf("Min is = %d\n", minValue);
    printf("Max is = %d\n", maxValue);
}