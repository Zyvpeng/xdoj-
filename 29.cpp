#include<stdio.h>
int main()
{
	int n,t,result=0;
	scanf("%d",&n);
	while(n!=0){
		t=n%10;
		result +=t;
		n/=10;
	}
	printf("%d",result);
	return 0;
}
