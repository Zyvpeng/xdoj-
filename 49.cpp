#include<stdio.h>
int main()
{
	int n,m=0,i;
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		if(i*i==n){
			printf("%d",i);
			m=1;
			break;
		}
	}
	if(m==0){
		printf("no");
	}
	return 0;
}
