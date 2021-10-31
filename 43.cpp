#include<stdio.h>
int main()
{
	int n,p,max=-1,min=10,count=0;
	scanf("%d",&n);
	if(n==0){
		count=1;
		max=0;
		min=0;
	}
	while(n>0){
		p=n%10;
		if(p>max){
			max=p;
		}
		if(p<min){
			min =p;
		}
		n/=10;
		count++	;
	}
	printf("%d %d %d",count,max,min);
	return 0;
}
