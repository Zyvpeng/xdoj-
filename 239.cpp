#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[20][20];
	int i,j;
	for(i=0;i<20;i++){
		for(j=0;j<20;j++){
			a[i][j]=0;
		}
	}
	
	for(i=0;i<n;i++){
		a[i][0]=1;
	}
	
	for(i=1;i<n;i++){
		for(j=1;j<=i;j++){
			a[i][j]=a[i-1][j]+a[i-1][j-1];
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
