#include<stdio.h>
int main()
{
	int m,n,i,j;
	int x=1;
	scanf("%d%d",&m,&n);
	int istart=0, iend=m-1;//ĞĞ 				
	int jstart=0,jend=n-1; //ÁĞ 				
	int a[100][100]={0};
	while(istart<=iend&&jstart<=jend){
		
		for(j=jstart;j<=jend;j++){
			a[istart][j]=x;
			x++;
		}
		istart++;
		
		for(i=istart;i<=iend;i++){
			a[i][jend]=x;
			x++;
		}
		jend--;
		
		if(iend>=istart){
			for(j=jend;j>=jstart;j--){
	
				a[iend][j]=x;
				x++;
			
			}
			iend--;
		}
		
		if(jend>=jstart){
			for(i=iend;i>=istart;i--){
				
				a[i][jstart]=x;
				x++;
								
			}
			jstart++;
		}
	}
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
