#include<stdio.h>
int main()
{
	int m,n=0;
	scanf("%d",&m);
	if(m==0){
		printf("1");
	}else{
		for(;m>0;){
		n++;
		m/=10;
	}
	printf("%d",n);}
	return 0;
 } 
