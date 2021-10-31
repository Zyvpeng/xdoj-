#include<stdio.h>
int main()
{
	int n,i,p=1,q=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		p*=i;
		q+=p;
	}
	printf("%d %d %d",n,p,q);
	return 0;
}
