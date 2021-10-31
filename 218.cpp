#include<stdio.h>
void f(int n){
	int i,isprime=1;
	for(i=2;i<n;i++){
		if(n%i==0){
			isprime=0;
			break;
		}
	}
	if(isprime==1){
		printf("YES");
	}else {
		printf("NO");
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	f(n);
	return 0;
	
 } 
