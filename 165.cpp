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
	int max=a[0];
	int j;
	for(i=0;i<n-1;i++){
		if(a[i+1]>max){
			max=a[i+1];
			j=i+1;
		}
	}
	printf("%d %d %d",n,max,j);
	return 0;
}
