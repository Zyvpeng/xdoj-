#include<stdio.h>
int main()
{
	int n,count=0;
	scanf("%d",&n);
	while(n!=1){
		if(n%2==0){
			n/=2;
			count++;
		}else{
			n=n*3+1;
			count++;
		}
		
	}
	printf("%d",count);
	return 0;
	
}
