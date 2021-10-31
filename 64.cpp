#include<stdio.h>
int main()
{
	int n,i,p;
	scanf("%d",&n);
	for(i=1;;i+=2){
		if((n*i+n*n+n)==n*n*n){
			for(p=i+2;p<i+2*n+2;p+=2){
				printf("%d ",p);
			}
			break;
		}
	}
	return 0;
}
