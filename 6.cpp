#include<stdio.h>
int main()
{
	int n,i,p,q,j,swap,t;
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
	b[i]=0;
	}
	for(i=0;i<n;i++){
	 q=a[i];
	while(q>0){
		b[i]+=(q%10);
		q/=10;
		}
	}
	
	for(i=0;i<n-1;i++){
		for(j=i;j<n;j++){
			if(b[i]<b[j]){
				swap=a[i];
				a[i]=a[j];
				a[j]=swap;
				t=b[i];
				b[i]=b[j];
				b[j]=t;
			}
			
		}
	}


	for(i=0;i<n-1;i++){
		for(j=i;j<n;j++){
			if(b[i]==b[j]&&a[i]>a[j]){
				swap=a[i];
				a[i]=a[j];
				a[j]=swap;
				t=b[i];
				b[i]=b[j];
				b[j]=t;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d %d\n",a[i],b[i]);
		
	}
	return 0;
}
