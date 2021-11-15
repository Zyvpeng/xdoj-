#include<stdio.h>
int main()
{
	int a1=2,a2=3,a;
	int b1=1,b2=2,b;
	int n;
	int i,j;
	int t;
	double sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(i==1){
			a=a1;
			b=b1;
		}
		else if(i==2){
			a=a2;
			b=b2;
		}
		else{
			a=3;
			b=2;
			for(j=2;j<i;j++){
				t=a;
				a+=a1;
				a1=t;
				
			}
			for(j=2;j<i;j++){
				t=b;
				b+=b1;
				b1=t;
			}
		}
		a1=2;
		b1=1;
		sum+=((1.0*a)/b);
	}
	printf("%.2f",sum);
	return 0;
}
