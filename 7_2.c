#include <stdio.h>

int main()
{
    float num[3] , max;
    for ( int i = 0; i < 3; i++)
    {
        scanf("%f",&num[i]);
    }
    max = num[0];
    for ( int i = 0; i < 3; i++)
    {
        while (num[i] > max)
        {
            max = num[i];
        }
    }
    
    printf("%.1f",max);
    return 0;
}
