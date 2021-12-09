

//思路：遍历对角线 

#include<stdio.h>
int main()
{
	int n;
	int i,j,p,h=0;
	scanf("%d",&n);
	int a[n][n]; 
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		if(h==0){
			for(p=0,j=i;j>=0;j--,p++){
				printf("%d ",a[j][p]);
			}
			h=1;
		} else{
			
			for(p=0,j=i;j>=0;j--,p++){
				printf("%d ",a[p][j]);
			}
			h=0;
		}
	}
	
	
	for(i=1;i<n;i++){
		if(h==1){
			for(p=n-1,j=i;j<n;j++,p--){
				printf("%d ",a[j][p]);
			}
			h=0;
		} else{
			
			for(p=n-1,j=i;j<n;j++,p--){
				printf("%d ",a[p][j]);
			}
			h=1;
		}
	}
	

	
	return 0;
}
