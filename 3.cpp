#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j,min;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	min =fabs(a[0]-a[1]);
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(fabs(a[j]-a[i])<min){
				min=fabs(a[j]-a[i]);
			}
		}
	}
	printf("%d",min);
	return 0;
}
