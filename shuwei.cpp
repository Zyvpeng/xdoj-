#include<stdio.h>
int main()
{
	int n,count=0;
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n-1;i++){
		if(a[i]==a[i+1]){
			count+=0;
		}
		else{
			count+=1;
		}
	}
	count+=1;
	printf("%d",count);
	return 0;
	
}
