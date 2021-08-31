//จงเขียนโปรแกรมเพื่อรับข้อมูลความสูงของนักเรียน 10 คน แล้วแสดงผลลัพธ์ความสูงของนักเรียน 10 คน พร้อมหาว่าความสูงเฉลี่ยของนักเรียน 10 คนเป็นเท่าไร (Level 3)
#include <stdio.h>
int main()
{
    float a,b,c,d,e,f,g,h,i,j,xbar;
    scanf("%f%f%f%f%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
    xbar=(a+b+c+d+e+f+g+h+i+j)/10;
    printf("%f",xbar);
    return 0;
}