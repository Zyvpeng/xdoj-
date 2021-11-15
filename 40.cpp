#include<stdio.h>
int main()
{
	int n,i,j,t,h=1;
	scanf("%d",&n);
	int a[n]={0};
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n-1;i++){
		for(j=i;j<n;j++){
			if(a[j]>a[i]){
			t=a[j];
			a[j]=a[i];
			a[i]=t;
			}
		}
	}

	int p=a[0]-a[1];
	for(i=0;i<n-1;i++){
		if(a[i]-a[i+1]!=p){
		
		h=0;
		break;}
		
	}
	if(h==1){
		printf("%d",p);
		
	}else
	{
		printf("no");
	}
	return 0;
		
	
	
}
