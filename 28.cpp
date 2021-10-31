#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int p[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	if(a%400==0||(a%4==0&&a%100!=0))
	{p[1]=29;}
    printf("%d",p[b-1]);
    return 0;
	
	
}
