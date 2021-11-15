#include<stdio.h>
int main()
{
	int n;
	int t,sum=0;
	scanf("%d",&n);
	while(n>9){
		sum =0;
		t=n;
		while(t!=0){
			sum+=t%10;
			t/=10;
		}
		n=sum;
	}
	printf("%d",n);
	return 0;
}
