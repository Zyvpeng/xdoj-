#include<stdio.h>
int main()
{
	int m,n,p,q,i;
	scanf("%d%d",&n,&m);
	int a[n][m];
	int b[n][m];
	for(p=0;p<n;p++){
		for(q=0;q<m;q++){
			scanf("%d",&a[p][q]);
			b[p][q]=a[p][q];
		}	
	}

	for(p=0;p<n;p++){
		for(q=0;q<m-2;q++){
			if(a[p][q]==a[p][q+1]&&a[p][q+1]==a[p][q+2]){
				b[p][q]=0;
				b[p][q+1]=0;
				b[p][q+2]=0;
			}
		}
	}
	for(q=0;q<m;q++){
		for(p=0;p<n-2;p++){
			if(a[p][q]==a[p+1][q]&&a[p+1][q]==a[p+2][q]){
				b[p][q]=0;
				b[p+1][q]=0;
				b[p+2][q]=0;
			}
		}
	}
	for(p=0;p<n;p++){
		for(q=0;q<m;q++){
		printf("%d ",b[p][q]);
		}	
		printf("\n");
	}
	return 0;
		
	}
	

