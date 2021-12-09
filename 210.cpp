#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	int min=a[1];
	int max=a[1];
	int mini=1,maxi=1;
	for(i=0;i<n;i++){
		
		if(a[i]>max){
			max=a[i];
			maxi=i;
		}
		if(a[i]<min){
			min=a[i];
			mini=i;
		}
	}
	

	a[maxi]=min;
	a[mini]=max;
	for(i=0;i<n;i++){
		
		printf("%d ",a[i]);
	}
	return 0;
 }
