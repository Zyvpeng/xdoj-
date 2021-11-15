#include<stdio.h>
int main()
{
	int i,j,m,n,p,h=1;
	int min,max;
	scanf("%d %d",&m,&n);
	int a[m][n]={0};
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<m;i++){
		min=a[i][0];
		for(j=0;j<n;j++){
			if(a[i][j]<min){
				min=a[i][j];
			}
		}
		for(j=0;j<n;j++){
			if(a[i][j]==min){
				max=a[0][j];
				for(p=0;p<m;p++){
					if (a[p][j]>max){
						max=a[p][j];
					}
					
				}
						if(min==max){
				printf("%d %d %d\n",i,j,min);
				h=0;
			}
	
			}
		}
			
		}
		if(h==1){
			printf("no\n");
		}
	
	return 0;
	
}
