#include<stdio.h>
#include<math.h>
int main()
{
	double a,x,x1;
	scanf("%lf",&a);
	x=a/2.0;
	x1=1.0/2*(x+a/x);
	while(fabs(x-x1)>1e-5){
		x=x1;
		x1=1.0/2*(x+a/x);
	}
	printf("%.5f",x1);
	return 0;
}
