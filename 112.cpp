#include<stdio.h>
#include<math.h>
int main()
{
	double x,s;
	scanf("%lf",&x);
	if(x>=0){
		s=sqrt(x);
	}else{
		s=(x+1)*(x+1)+2.0*x+1.0/x;
	}
	printf("%.2f",s);
	return 0;
	
}
