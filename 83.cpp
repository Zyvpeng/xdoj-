#include<stdio.h>
int main()
{
	int m,n;
	int i,j;
	int p=0,q=0;
	scanf("%d %d",&m,&n);
	int a[m][n],b[n][m];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0,q=m-1;i<m;i++,q--){
		for(j=0,p=0;j<n;j++,p++){
			b[j][i]=a[q][p];
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	return 0;
	
}
