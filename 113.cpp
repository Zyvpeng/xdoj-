
#include<stdio.h>
int main()
{
    float a=10.0;
    int c;
    float b;
    scanf("%f%d",&b,&c);
    if(b>3&&b<=10)
        a+=(b-3)*2;
    if(b>10)
        a+=(b-10)*3+14;
    a+=(c/5)*2;
    c=a+0.5;
    printf("%d",c);
    return 0;
}

