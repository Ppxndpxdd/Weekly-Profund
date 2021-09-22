/*
64010965 อนาวิล ธรรมเจริญทิพย์
จงเขียนโปรแกรม Copy ไฟล์ข้อมูลโดยให้นักศึกษาป้อนข้อมูลของไฟล์ต้นทาง และข้อมูลไฟล์ปลายทาง (Level 4)
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char t[1000],temp[1000];
    FILE *f =fopen("c:\\temp\\data1.txt", "w");
    scanf("%s",&t);
    fputs(t,f);
    fclose(f);
    FILE *fp =fopen("c:\\temp\\data1.txt", "r");
    while (!feof(fp))
    {
        fgets(t,1000,fp);
    }
    FILE *ff =fopen("c:\\temp\\data2.txt", "w");
    fprintf(ff,"%s",t);
    fclose(ff);
    return 0;
}