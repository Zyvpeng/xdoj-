#include<stdio.h>
int main()
{
	int x,p=0;
	scanf("%d",&x);
	while(x>=10){
		while(x>0){
			p+=(x%10);
			x/=10;
		}
		x=p;
		p=0;
	}
	printf("%d",x);
	return 0;
}
