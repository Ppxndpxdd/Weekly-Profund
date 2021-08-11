#include <stdio.h>

int main()
{
    int num[3], i, max;
    for ( i = 0; i < 3; i++)
    {
        scanf("%d",&num[i]);
    }
    max = num[0];
    for ( i = 0; i < 3; i++)
    {
        while (num[i] > max)
        {
            max = num[i];
        }
    }
    
    printf("%d",max);
    return 0;
}