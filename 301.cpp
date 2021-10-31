#include<stdio.h>
int main()
{
	int m,n,mz=0,nz=0,i,c1=0,c2=0;
	scanf("%d%d",&m,&n);
	for(i=1;i<m;i++){
		if(m%i==0){
			mz+=i;
			c1++;
		}
	}
	for(i=1;i<n;i++){
	if(n%i==0){
		nz+=i;
		c2++;
	    }
	}
	if(m==nz&&n==mz){
		printf("yes ");
	}else
	{
		printf("no ");
	}
	printf("%d %d",c1,c2);
	return 0;
}
