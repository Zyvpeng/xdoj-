#include<stdio.h>
int main(){
	int a[4],i,m,n,t;
	for(i=0;i<4;i++){
		scanf("%d",&a[i]);
	}
	for(m=0;m<4;m++){
		for(n=m+1;n<4;n++){
			if(a[n]>a[m]){
				t=a[n];
				a[n]=a[m];
				a[m]=t;
			}
		}
	}
	for(i=3;i>=0;i--){
		printf("%d ",a[i]);
	}
	return 0;
}
