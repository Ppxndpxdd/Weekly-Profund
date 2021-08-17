//จงเขียนโปรแกรมรับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย * เป็นสี่เหลี่ยมที่มีด้านเท่ากับตัวเลขที่รับเข้ามา ดังตัวอย่าง (Level 2)
#include <stdio.h>
void column(int n){
    if (n>0)
    {
        printf("*");
        column(n-1);
    }
}
void row(int n, int m){
    if(n>0)
    {
        column(m);
        printf("\n");
        row(n-1,m);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    row(n,n);
    return 0;
}
