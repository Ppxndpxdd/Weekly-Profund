#include <stdio.h>
int main()
{
    float a=0,b;
    for (size_t i = 0; i < 10; i++)
    {
         scanf("%f",&b);
         a+=b;
    }
    printf("%f",a/10);
    return 0;
}