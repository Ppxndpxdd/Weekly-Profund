/*
6401965 อนาวิล ธรรมเจริญทิพย์
จงเขียนโปรแกรม Copy ไฟล์ข้อมูลโดยให้นักศึกษาป้อนข้อมูลของไฟล์ต้นทาง และข้อมูลไฟล์ปลายทาง (Level 4)
*/
#include <stdio.h>
int main()
{
    char input [100], content[1000];
    printf("Input : ");
    scanf("%[^\n]",input); //ที่อยู่ไฟล์
    FILE *inputFile =fopen(input, "r");
    if (inputFile == NULL)
    {
        printf("There is no such file.");
        return 0;
    }
    printf("Output : ");
    scanf(" %[^\n]",input);
    FILE *outputFile =fopen(input, "w");
    while(!feof(inputFile))
    {
        fgets(content,1000,inputFile);
        fprintf(outputFile,"%s",content);
    }
    _fcloseall();
    return 0;
}
