#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		printf("%d %d\n",a%10,b*b);
		
	}
	 else if(a<b)
	{
		printf("%d %d\n",b%10,a*a);
		
	}
	return 0;
	
}
