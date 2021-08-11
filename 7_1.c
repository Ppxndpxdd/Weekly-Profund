//จงเขียนโปรแกรมเพื่อรับตัวเลข 3 ตัว แล้วหาตัวเลขที่มีค่ามากที่สุด (Level 1)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    if (a>b && a>c)
    {
        printf("a");
    }
    else if (b>a && b>c)
    {
        printf("b");
    }
    else if (c>a && c>b)
    {
        printf("c");
    }
    
    
    return 0;
}