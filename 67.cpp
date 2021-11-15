#include<stdio.h>
int main()
{
	int m,n,i,h=0;
	scanf("%d %d",&m,&n);
	int a[m]={0};
	for(i=0;i<m;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<m;i++){
		if(a[i]==n){
			printf("%d ",i);
			h=1;
		}
	}
	if(h==0){
		printf("-1");
	}
	return 0;
}
