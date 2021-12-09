#include<stdio.h>
int main()
{
	int m,n,h=0,count=0,max=0,m1=0,m2=0;
	int a[20][20]={0};
	

	scanf("%d %d",&m,&n);
	int i,j,p;
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(a[i][j]==1){
				h=1;
				count++;
				for(p=j+1;p;p++){
					if(a[i][p]==1){
						count++;
					}else
					{
						if(count>max){
						m1=j; 
						m2=p-1;
						max=count;
	
						}
							break;
						
					}

				}
				count=0;
			}
			
		}
		
		if(h==1){
			printf("%d %d\n",m1,m2);
		}else{
			printf("-1 -1\n");

		}
			m1=0;
			m2=0;
			h=0;
			max=0;
	}
	return 0;
	
}
