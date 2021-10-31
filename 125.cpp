#include<stdio.h>
#include<math.h>
int main()
{
	double p,r,n;
	scanf("%lf %lf",&r,&n);
	p=pow(1+r,n);
	printf("%.2f",p);
	return 0;
}
