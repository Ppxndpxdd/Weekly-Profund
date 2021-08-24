//จงเขียนโปรแกรมรับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย * เป็นสามเหลี่ยมที่มีด้านเท่ากับตัวเลขที่รับเข้ามา ดังตัวอย่าง (Level 2)
#include <stdio.h>
void triangle(int n){
    for (int i = 1; i <= n; i++)
    {
            for (int j = 1; j <= i ; j++)
        {
            printf("*");
        }
    printf("\n");
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    triangle(n);
    return 0;
}