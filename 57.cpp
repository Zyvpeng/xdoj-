#include<stdio.h>


int fib(int n){
	int a=7,b=11,t;
	if(n==0){
		return 7;
	}else if(n==1){
		return 11;
	}
	else{
		while(n>1){
			t=b;
			b+=a;
			a=t;
			n--;
		}
		return b;
		
	}
	
}
int main()
{
	int n;
	scanf("%d",&n);
	int x=fib(n);
	printf("%d",x);
	return 0;
}
