#include<stdio.h>
int main()
{
	int i,j,q,x,m;
	scanf("%d",&m);
	int p=m;
	int b[100]={0};
	int a[m][m];
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			b[i]+=a[i][j];
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			b[p]+=a[j][i];
		}
			p++;
	}
	for(i=0;i<m;i++){
		b[p]+=a[i][i];
	}
	p++;
	for(i=0;i<m;i++){
		b[p]+=a[i][m-1-i];
	}
	for(i=0;i<2*m+1;i++){
		for(j=i;j<2*m+2;j++){
			if(b[j]>b[i]){
				q=b[i];
				b[i]=b[j];
				b[j]=q;
			}
		}
	}
	for(i=0;i<2*m+2;i++){
		printf("%d ",b[i]);
	}
	return 0;
}
