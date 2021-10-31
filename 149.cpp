#include<stdio.h>
int main()
{
	int a,b,d,n;
	double c,sum=0;
	scanf("%d",&n);
	for(a=1,b=1,d=1;a<=n;a+=1,b+=2){
		c = a*d*1.0/b;
		sum +=c;
		d=-d;
		
	}
	printf("%.3f",sum);
	return 0;
}
