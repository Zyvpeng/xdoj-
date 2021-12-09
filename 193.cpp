#include<stdio.h>
int main()
{
	int i,j;
	int n,t;
	int sum=0;
	double outcome;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				t=a[j+1];
				a[j+1]=a[j];
				a[j]=t;
				
			}
		}
	}
	
	for(i=1;i<n-1;i++){
		sum+=a[i];
	}

	outcome=1.0*sum/(n-2);
	printf("%.2f",outcome);
	return 0;
}
