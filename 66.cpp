#include<stdio.h>
int main()
{
	int n,i,p,sum=0;
	double result;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&p);
		sum+=p;
	}
	result=sum*1.0/n;
	printf("%.2f",result);
	return 0;
}
