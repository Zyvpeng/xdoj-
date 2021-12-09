#include<stdio.h>
int main()
{
	int n;
	int t;
	scanf("%d",&n);
	int a[n]={0};
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			
			if(a[j]>a[i]){
				t=a[j];
				a[j]=a[i];
				a[i]=t;
			}
		}
	}
	
	
	
	
	printf("%d ",a[0]);
	if(n%2==0){
		printf("%d ",(a[n/2-1]+a[n/2])/2);
		
	}else{
		
		printf("%d ",a[(n-1)/2]);
		
	}
	
	printf("%d",a[n-1]);
	
	return 0;
	
}
