#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int a[m][n]={0};
	int i,j=0,m=1,t;
	for(t=0;t<)
	{
		for(i=0;i<n;i++){
			a[0][i]=m++;
		}
		for(i=1;i<m;i++){
			a[n-1][i]=m++;
		}
		for(i=n-2;i>=0;i--){
			a[m-1][i]=m++;
		}
		for(i=m-2;i>0;i--){
			a[i][0]=m++;
		}
	}
}
