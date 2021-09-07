//จงเขียนฟังก์ชั่นเพื่อหาตัวเลขที่มีค่ามากที่สุดจากอินพุทตัวเลข 2 ตัว (Level 3)
#include <stdio.h>
int compare (int, int);
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",compare(a,b));
    return 0;
}
int compare (int x, int y)
{
    return ((x-y)*(x>y))+y;
    // 1-2 * 0 + 2 = 1
    // 2-1 * 1 + 1 = 2
}