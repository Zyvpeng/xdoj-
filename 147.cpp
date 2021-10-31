#include<stdio.h>
int main()
{
	int i,a,sum=0;
	for(i=0;i<100;i++){
		scanf("%d",&a);
		if(a==0){
			break;
		}
		if(a%2!=0){
			sum+=a;}
		
	}
	printf("%d",sum);
	return 0;
 } 
