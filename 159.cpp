#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int a=1,b=1,c=1,i;
	for(i=1;i<m+1;i++){
			a*=i;
	}
		for(i=1;i<n+1;i++){
			b*=i;
	}
		for(i=1;i<m-n+1;i++){
			c*=i;
	}
	double x=a*1.0/b/c;
	
	printf("%.2f",x);
	return 0;
	
 } 
