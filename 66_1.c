/*จงเขียนโปรแกรมเพื่อรับข้อมูลเป็น string ไปเรื่อยๆ จนกว่าจะพิมพ์เครื่องหมาย . หลังจากนั้นให้จัดเก็บข้อมูลลงในไฟล์ชื่อ
c:\temp\data.txt ดังตัวอย่าง (Level 4)*/
#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    FILE *f =fopen("c:\\temp\\data.txt", "w");
    while (1)
    {
        scanf("%s", s);
        fprintf(f, s);
        fprintf(f, "\n");
        if (s[strlen(s) - 1] == '.')
        {
            break;
        }
    }
    fclose(f);
    return 0;
}