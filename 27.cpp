#include<stdio.h>
int main ()
{
	double a,b;
	scanf("%lf",&a);
	if(a>=0&&a<=110){
		b=a*0.5;
	}
	else if(a>110&&a<=210){
		b=0.5*110+0.55*(a-110);
	}
	else if(a>210){
		b=0.5*110+0.55*100+0.7*(a-210);
	}
	printf("%.2f",b);
	return 0;
}
